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
using P = pair<int,int>;
using T = tuple<int,int,int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vp = vector<P>;
using vt = vector<T>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL << 60;

int main() {
  int n;
  cin >> n;
  vl c(n);
  REP(i, n) cin >> c[i];
  ll ans = 0;
  int m = dup(n, 2);
  ll MNall = INF, MNodd = INF;
  ll t1 = 0, t2 = 0, t3 = 0;
  REP(i, n) {
    chmin(MNall, c[i]);
    if(i%2==0) chmin(MNodd, c[i]);
  }

  int q;
  cin >> q;
  REP(qi, q) {
    int t;
    cin >> t;
    if (t==1) {
      int x;
      ll a;
      cin >> x >> a;
      x--;
      ll tmp = c[x] - t3;
      if(x%2==0) tmp -= t2;
      if (tmp>=a) {
        c[x] -= a;
        tmp -= a;
        ans += a;
        chmin(MNall, tmp);
        if(x%2==0) chmin(MNodd, tmp);
        t1+=a;
      }
    }else if(t==2) {
      ll a;
      cin >> a;
      if (MNodd>=a) {
        // for(int i = 0; i < n; i+=2) {
        //   c[i] -= a;
        //   // chmin(MNodd, c[i]);
        // }
        ans += a*m;
        MNodd -= a;
        chmin(MNall, MNodd);
        t2+=a;
      } 
    }else {
      ll a;
      cin >> a;
      if (MNall>=a) {
        // REP(i, n) {
        //   c[i] -= a;
        //   // chmin(MNall, c[i]);
        //   // if(i%2==0) chmin(MNodd, c[i]);
        // }
        MNall -= a;
        MNodd -= a;
        ans += a*n;
        t3+=a;
      }
    }
  }
  cout << ans << endl;

  return 0;
}
