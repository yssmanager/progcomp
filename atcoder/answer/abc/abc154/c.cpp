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
    set<int> s;
    rep(i, n) s.insert(a[i]);
    if (s.size() == n) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}