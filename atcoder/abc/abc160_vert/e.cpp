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
  int x, y, a, b, c;
  cin >> x >> y >> a >> b >> c;
  vector<int> p(a), q(b), r(c);
  REP(i, a) cin >> p[i];
  REP(i, b) cin >> q[i];
  REP(i, c) cin >> r[i];
  vector<P> pqr;
  REP(i, a) pqr.push_back(make_pair(p[i], 0));
  REP(i, b) pqr.push_back(make_pair(q[i], 1));
  REP(i, c) pqr.push_back(make_pair(r[i], 2));
  sort(all(pqr));
  reverse(all(pqr));
  ll ans = 0;
  int CX = 0, CY = 0, CM = 0;
  int it = 0;
  while (CM<x+y) {
    if(pqr[it].second==0) {
      if(CX<x) {
        ans += pqr[it].first;
        CX++; CM++;
      }
    }else if(pqr[it].second==1) {
      if(CY<y) {
        ans += pqr[it].first;
        CY++; CM++;
      }
    }else {
      ans += pqr[it].first;
      CM++;
    }
    it++;
  }
  cout << ans << endl;

  return 0;
}