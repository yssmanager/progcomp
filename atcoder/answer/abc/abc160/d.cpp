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

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  --x; --y;
  vector<int> ans(n);
  REP(sv, n) {
    vector<int> dist(n, INF);
    queue<int> q;
    auto push = [&](int v, int d) {
      if (dist[v] != INF) return;
      dist[v] = d;
      q.push(v);
    };
    push(sv, 0);
    while (!q.empty()) {
      int v = q.front(); q.pop();
      int d = dist[v];
      if (v-1 >= 0) push(v-1, d+1);
      if (v+1 < n) push(v+1, d+1);
      if (v == x) push(y, d+1);
      if (v == y) push(x, d+1);
    }
    REP(i, n) ans[dist[i]]++;
  }
  REP(i, n) ans[i] /= 2;
  FORe(i, 1, n-1) cout << ans[i] << endl;

  return 0;
}