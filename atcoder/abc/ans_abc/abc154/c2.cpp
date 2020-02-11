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
    a.erase(unique(all(a)), a.end());
    if (a.size() == n) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}