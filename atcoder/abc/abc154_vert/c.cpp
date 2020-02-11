#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(all(a));

    rep(i, n-1) {
        if (a[i+1]<=a[i]) {
            cout << "NO" << endl;
            return 0;
        }
    } 
    cout << "YES" << endl;

    return 0;
}