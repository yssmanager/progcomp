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


int n;
int a[15][15];
int g[15];
int ans = -1001001001;

void dfs(int x) {
  if(x == n) {
    int tmp = 0;
    REP(i, n-1) {
      FOR(j, i+1, n) {
       if (g[i]==g[j]) tmp += a[i][j];
      }
    }
    chmax(ans, tmp);
    return;
  }
  REP(i, 3) {
    g[x] = i;
    dfs(x+1);
  }
}

int main() {
  cin >> n;
  REP(i, n-1) {
    FOR(j, i+1, n) cin >> a[i][j];
  }
  dfs(0);
  cout << ans << endl;

  return 0;
}