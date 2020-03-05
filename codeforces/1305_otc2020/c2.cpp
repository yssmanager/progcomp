#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = (a); i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    ll ans = 1;
    if (n<m) {
        rep(i, 0, n) {
            rep(j, i+1, n) {
                (ans *= abs(a[j]-a[i])) %= m;
            }
        } 
    }else {
        ans = 0;
    }
    cout << ans << endl;

    return 0;
}