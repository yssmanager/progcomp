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
            string tmp, ss_l, ss_r;
            ss_l = s.substr(0, k);
            ss_r = s.substr(k);
            if((n+k)%2==1) reverse(all(ss_l));
            tmp = ss_r+ss_l;
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