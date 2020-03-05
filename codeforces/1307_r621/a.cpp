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
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        rep(i, n) cin >> a[i];

        int tmp_d = d, j = 1;
        ll ans = a[0];
        while (tmp_d>0) {
            if (a[j]==0) {
                j++;
                continue;
            }else if (j>=n){
                break;
            }
            else {
                if (tmp_d < j) {
                    break;
                }else {
                    ans++;
                    a[j]--;
                    tmp_d -= j;
                    // cout << "tj;"<< j << endl;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}