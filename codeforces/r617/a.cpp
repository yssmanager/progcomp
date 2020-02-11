#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    rep(i, t) {
        int n;
        cin >> n;
        // vector<int> a(n);
        int odd = 0, even = 0;
        rep(i, n) {
            int a;
            cin >> a;
            if (a%2==1) odd++;
            else even++;
        }
        if (odd%2 == 1 || (even>0&&odd>0)) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}