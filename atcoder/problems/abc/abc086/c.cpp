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
  vector<int> t(n+1), x(n+1), y(n+1);
  FORe(i, 1, n) cin >> t[i] >> x[i] >> y[i];
  REP(i, n) {
    int dt, dx, dy;
    dt = abs(t[i+1]-t[i]);
    dx = abs(x[i+1]-x[i]);
    dy = abs(y[i+1]-y[i]);
    int dc = dx+dy;
    if (dc<=dt && (dc%2)==(dt%2)) continue;
    else {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;

  return 0;
}