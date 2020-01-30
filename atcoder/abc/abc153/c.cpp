#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    rep(i, n) cin >> h[i];

    if (n <= k) cout << 0 << endl;
    else {
        int count;
        ll ans = 0;
        sort(h.begin(), h.end(),greater<int>());
        for (int i = k; i < n; i++) ans += h[i];
        cout << ans << endl;
    }

    return 0;
}