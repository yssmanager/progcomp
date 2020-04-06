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
  int n;
  cin >> n;
  vector<int> x(n);
  vector<char> c(n);
  REP(i, n) cin >> x[i] >> c[i];
  vector<int> r, b;
  REP(i, n) {
    if (c[i]=='R') r.emplace_back(x[i]);
    else b.emplace_back(x[i]);
  }
  sort(all(r));
  sort(all(b));
  REP(i, r.size()) cout << r[i] << endl; 
  REP(i, b.size()) cout << b[i] << endl; 

  return 0;
}