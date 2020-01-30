#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, W;
    cin >> n >> W;
    vector<vector<ll>> dp(n+1, vector<ll>(W+1));
    rep(i, n) {
        int w, v;
        cin >> w >> v;
        rep(j, W+1) {
            int jw = j-w;
            
            if (jw >= 0) {
               chmax(dp[i+1][j], dp[i][jw]+v);
            }
            
            chmax(dp[i+1][j], dp[i][j]);

            // printf("dp[%d] = %lld\n", j, dp[i+1][j]);
        }
    }
    cout << dp[n][W] << endl;

    return 0;
}