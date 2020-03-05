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
        string s;
        cin >> n >> s;
        string ans_s = s;
        int ans = 0;
        rep(k, n) {
            string tmp = s;
            rep(i, n-k) {
                rep(j, k) {
                    if (i+j>=i+k-j) break;
                    swap(tmp[i+j],tmp[i+k-j]);
                }
            }
            if (tmp<ans_s) {
                ans_s = tmp;
                ans = k;
            }
        }
        cout << ans_s << endl;
        cout << ans+1 << endl;
    }

    return 0;
}