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
using P = pair<int,ll>;
using pci = pair<char,int>;
using T = tuple<int,int,int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vs = vector<string>;
using vp = vector<P>;
using vt = vector<T>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int Q;
  cin >> Q;
  deque<P> q;
  REP(Qi, Q) {
    int t;
    cin >> t;
    if (t==1) {
      char c; int x;
      cin >> c >> x;
      int ci = c-'a';
      P p = P(ci, x);
      q.emplace_back(p);
    }else {
      ll d;
      cin >> d;
      vl alp(26);
      while(d > 0) {
        if(q.empty()) break;
        P tq = q.front(); q.pop_front();
        ll x = tq.second;
        int ic = tq.first;
        alp[ic] += min(x, d);
        if(x-d>0) q.emplace_front(P(ic, x-d));
        d -= x;
      }
      ll ans = 0;
      REP(i, 26) ans += (alp[i]*alp[i]);
      cout << ans << endl;
    }
  }

  return 0;
}