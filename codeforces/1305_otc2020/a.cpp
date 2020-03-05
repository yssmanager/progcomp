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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        rep(i, n) cin >> a[i];
        rep(i, n) cin >> b[i];
        sort(all(a));
        sort(all(b));
        rep(i, n) cout << a[i] << " ";
        cout << endl;
        rep(i, n) cout << b[i] << " ";
        cout << endl;
    }

    return 0;
}