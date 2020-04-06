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

const int INF = 1001001001;
int m[4][4];

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int sum = a+b+c;
  vector<int> v;
  FORe(i, 1, sum) v.push_back(i);
  int ans = 0;
  do {
    if (v[0] != 1) break;
    int it = 0;
    REP(i, 4) REP(j, 4) m[i][j] = INF;
    REP(i, a) {
      m[0][i] = v[it];
      it++;
    }
    REP(i, b) {
      m[1][i] = v[it];
      it++;
    }
    REP(i, c) {
      m[2][i] = v[it];
      it++;
    }
    bool ok = true;
    REP(i, 3) REP(j, 3) {
      if ((m[i][j] > m[i+1][j]) || (m[i][j] > m[i][j+1])) ok = false;
    }
    if (ok) ans++;
  } while (next_permutation(all(v)));

  cout << ans << endl;
  return 0;
}