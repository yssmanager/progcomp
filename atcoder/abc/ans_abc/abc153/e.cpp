#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

const int INF = 1001001001;

int main() {
    int h, n;
    cin >> h >> n;
    vector<int> dp(h+1, INF);
    dp[0] = 0;
    rep(i, n) {
        int a, b;
        cin >> a >> b;
        rep(j, h) {
            int nj = min(j+a, h);
            dp[nj] = min(dp[nj], dp[j]+b);
            // printf("dp[%d] = %d\n", nj, dp[nj]);
        }
    }
    cout << dp[h] << endl;

    return 0;
}