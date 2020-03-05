#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int t;
    cin >> t;
    rep(i, t) {
        int n, m;
        cin >> n >> m;
        int ans = 0;
        int a;
        rep(i, n) {
            cin >> a;
            ans += a;
        }
        ans = min(ans, m);
        cout << ans << endl;
    }

    return 0;
}