#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int A, B, m;
    cin >> A >> B >> m;
    vector<int> a(A), b(B);
    rep(i, A) cin >> a[i];
    rep(i, B) cin >> b[i];
    int ans = 1001001001;
    rep(i, m) {
        int x, y, c;
        cin >> x >> y >> c;
        x--; y--;
        ans = min(ans, a[x]+b[y]-c);
    } 
    sort(all(a));
    sort(all(b));
    ans = min(ans, a[0]+b[0]);
    cout << ans << endl;

    return 0;
}