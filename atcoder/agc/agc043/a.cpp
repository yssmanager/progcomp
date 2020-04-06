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

const int INF = 1001001001;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

vector<vector<int>> dp(110,vector<int>(110, INF));

int f(char c) {
  if(c=='#') return 1;
  else return 0;
}


int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  REP(i, h) cin >> s[i];

  dp[0][0] = 0;
  if(s[0][0]=='#') dp[0][0]++;
  // REP(i, h)  {
  //   REP(j, w) {
  //     if(j!=w-1) chmin(dp[i][j+1],dp[i][j]+f(s[i][j+1]));
  //     if(i!=h-1) chmin(dp[i+1][j],dp[i][j]+f(s[i+1][j]));
  //   }
  // }
  FOR(i, 0, h)  {
    FOR(j, 0, w) {
      if(j) {
        int x = f(s[i][j]);
        if(s[i][j-1]=='#') x = 0;
        chmin(dp[i][j],dp[i][j-1]+x);
      }
      if(i) {
        int x = f(s[i][j]);
        if(s[i-1][j]=='#') x = 0;
        chmin(dp[i][j],dp[i-1][j]+x);
      }
    }
  }
  int ans = dp[h-1][w-1];
  // REP(i, h)  {
  //   REP(j, w) {
  //     printf("%d%c", dp[i][j], (j==w-1?'\n':' '));
  //   }
  // }
  cout << ans << endl;
  return 0;
}