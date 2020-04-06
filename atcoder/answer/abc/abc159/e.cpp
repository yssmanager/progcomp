#include <bits/stdc++.h>
#define FOR(i, a, n) for(int (i) = (int)(a); (i) < (int)(n); ++(i))
#define FORe(i, a, n) for(int (i) = (int)(a); (i) <= (int)(n); ++(i))
#define rFOR(i, a, n) for(int (i) = (int)(n)-1; (i) >= (int)(a); --(i))
#define REP(i, n) FOR((i), 0, (n))
#define REPe(i, n) FORe((i), 0, (n))
#define rREP(i, n) rFOR((i), 0, (n))
#define all(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const int INF = 1001001001;
int c[10][1005];

int main() {
  int h, w, k;
  cin >> h >> w >> k;
  vector<string> s(h);
  REP(i, h) cin >> s[i];
  int ans = INF;
  REP(div, 1<<(h-1)) {
    int g = 0;
    vector<int> id(h);
    REP(i, h) {
      id[i] = g;
      if (div>>i&1) ++g;
    }
    ++g;
    REP(i, g)REP(j, w) c[i][j] = 0;
    REP(i, h)REP(j, w) c[id[i]][j] += (s[i][j]-'0');

    int num = g-1;
    vector<int> now(g);
    auto add = [&](int j) {
      REP(i, g) now[i] += c[i][j];
      REP(i, g) if (now[i]>k) return false;
      return true;
    };
    REP(j, w) {
      if (!add(j)) {
        num++;
        now = vector<int>(g);
        if (!add(j)) {
          num = INF;
          break;
        }
      }
    }
    chmin(ans, num);
  }
  cout << ans << endl;

  return 0;
}