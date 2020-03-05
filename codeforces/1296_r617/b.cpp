#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    rep(i, t) {
        int s;
        cin >> s;
        ll ans = 0;
        while (s>=10) {
            ans += (s/10)*10;
            s = s/10 + s%10;
        }
        ans += s;
        cout << ans << endl;
    }

    return 0;
}