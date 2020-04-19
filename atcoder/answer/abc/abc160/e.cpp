#include <bits/stdc++.h>
#define FOR(i, a, n) for(int (i) = (int)(a); (i) < (int)(n); ++(i))
#define FORe(i, a, n) for(int (i) = (int)(a); (i) <= (int)(n); ++(i))
#define rFOR(i, a, n) for(int (i) = (int)(n)-1; (i) >= (int)(a); --(i))
#define REP(i, n) FOR((i), 0, (n))
#define REPe(i, n) FORe((i), 0, (n))
#define rREP(i, n) rFOR((i), 0, (n))
#define rep(i, n) FOR((i), 0, (n))
#define all(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int x, y;
  cin >> x >> y;
  int a, b, c;
  cin >> a >> b >> c;
  vector<int> p(a), q(b), r(c);
  REP(i, a) cin >> p[i];
  REP(i, b) cin >> q[i];
  REP(i, c) cin >> r[i];
  sort(p.rbegin(), p.rend());
  sort(q.rbegin(),q.rend());
  vector<int> d;
  REP(i, x) d.push_back(p[i]);
  REP(i, y) d.push_back(q[i]);
  REP(i, c) d.push_back(r[i]);
  sort(d.rbegin(), d.rend());
  ll ans = 0;
  REP(i, x+y) ans += d[i];
  cout << ans << endl;

  return 0;
}