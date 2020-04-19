#include <bits/stdc++.h>
#define FOR(i, a, n) for(int (i) = (int)(a); (i) < (int)(n); ++(i))
#define FORe(i, a, n) for(int (i) = (int)(a); (i) <= (int)(n); ++(i))
#define rFOR(i, a, n) for(int (i) = (int)(n)-1; (i) >= (int)(a); --(i))
#define REP(i, n) FOR((i), 0, (n))
#define REPe(i, n) FORe((i), 0, (n))
#define rREP(i, n) rFOR((i), 0, (n))
#define rep(i, n) FOR((i), 0, (n))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define fi first
#define se second
#define dup(x, y) (((x)+(y)-1)/(y))
#define v(T) vector<T>
#define vv(T) v(v(T))
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int,int>;
using plc = pair<ll,char>;
using T = tuple<int,int,int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vp = vector<P>;
using vt = vector<T>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ull INF = 1LL << 63;

ull score(ll x, ll y, ll z) {
  ull res = (x-y)*(x-y);
  res += (y-z)*(y-z);
  res += (z-x)*(z-x);
  return res;
}

char comp(int x, int y, int z) {
  char res;
  if((x <= y && y <= z )|| (z <= y && y <= x)) res = 'g';
  if((x <= z && z <= y) || (y <= z && z <= x)) res = 'b';
  if((y <= x && x <= z) || (z <= x && x <= y)) res = 'r';
  return res;
}

int main() {
  int t;
  cin >> t;
  REP(ti, t) {
    int R, G, B;
    cin >> R >> G >> B;
    vl r(R), g(G), b(B);
    REP(i, R) cin >> r[i];
    REP(i, G) cin >> g[i];
    REP(i, B) cin >> b[i];
    v(plc) pp;
    REP(i, R) pp.push_back(plc(r[i], 'r'));
    REP(i, G) pp.push_back(plc(g[i], 'g'));
    REP(i, B) pp.push_back(plc(b[i], 'b'));
    sort(all(pp));
    int x, y, z, sum = R+G+B;
    bool br = false, bg = false, bb = false, ball = false;
    // REP(i, sum) {
    //   if (pp[i].second=='r') {
    //     x = i;
    //     break;
    //   }
    // }
    // REP(i, sum) {
    //   if (pp[i].second=='g') {
    //     y = i;
    //     break;
    //   }
    // }
    // REP(i, sum) {
    //   if (pp[i].second=='b') {
    //     z = i;
    //     break;
    //   }
    // }
    // int it = max(x, y);
    // chmax(it, z);
    // it++;
    ull ans = INF;
    for (int it = 0; it < sum; it++) {
      if (pp[it].second=='r') {x = it; br = true;}
      else if (pp[it].second=='g') {y = it; bg = true;}
      else {z = it; bb = true;}
      if (!ball) {
        if ((br&&bg)&&bb) {
          ball = true;
          int iitr = max(x, y);
          chmax(iitr, z);
          int iitl = min(x, y);
          chmin(iitl, z);
          char mid = comp(x, y, z);
          for(int j = iitl+1; j < iitr; j++) {
            if(pp[j].second==mid) chmin(ans, score(pp[iitl].first, pp[iitr].first, pp[j].first));
          }
        }
      }
      else chmin(ans, score(pp[x].first, pp[y].first, pp[z].first));
    }
    cout << ans << endl;

  }

  return 0;
}