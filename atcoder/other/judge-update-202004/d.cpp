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
  int n, q;
  cin >> n >> q;
  vector<int> a(n), s(q);
  REP(i, n) cin >> a[i];
  REP(i, q) cin >> s[i];

  REP(i, q) {
    bool ok = false;
    int ans = 0;
    REP(j, n) {
      s[i] = gcd(s[i], a[j]);
      if (s[i] == 1) {
        ans = j+1;
        ok = true;
        break;
      }
    }
    cout << (ok?ans:s[i]) << endl;
  }

  return 0;
}