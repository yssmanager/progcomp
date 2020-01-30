#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(3));
    rep(i, n) rep(j, 3) cin >> a[i][j];
    vector<vector<ll>> dp(n+1, vector<ll>(3));
    
    rep(i, n) {
        rep(j, 3) {
            rep(k, 3) {
                if (j==k) continue;
                chmax(dp[i+1][k], dp[i][j]+a[i][k]);
            }
        }
    }

    ll ans = 0;
    rep(j, 3) chmax(ans, dp[n][j]);
    cout << ans << endl;
    return 0;
}