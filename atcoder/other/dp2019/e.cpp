#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const int MAX_V = 100100;

int main() {
    int n, W;
    cin >> n >> W;
    vector<vector<ll>> dp(n+1, vector<ll>(MAX_V, INF));
    dp[0][0] = 0;
    rep(i, n) {
        int w, v;
        cin >> w >> v;
        rep(j, MAX_V) {
            int jv = j-v;
            
            if (jv >= 0) {
               chmin(dp[i+1][j], dp[i][jv]+w);
            }
            
            chmin(dp[i+1][j], dp[i][j]);

            // printf("dp[%d] = %lld\n", j, dp[i+1][j]);
        }
    }

    ll ans = 0;
    rep(i, MAX_V) if (dp[n][i]<=W) ans = i; 
    cout << ans << endl;

    return 0;
}