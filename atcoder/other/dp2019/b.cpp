#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL << 60;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    rep(i, n) cin >> h[i];

    vector<ll> dp(n, INF);
    dp[0] = 0;

    rep(i, n)  {
        for (int j = 1; j <= k; j++) {
            int nj = min(i+j, n-1);
            chmin(dp[nj], dp[i]+abs(h[nj]-h[i]));
        }
    }

    cout << dp[n-1] << endl;
    return 0;
}