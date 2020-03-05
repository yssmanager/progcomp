#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int t, n;
    cin >> t;

    rep(i, t)  {
        cin >> n;
        vector<int> x(n), y(n);
        rep(i, n) cin >> x[i] >> y[i];

        vector<vector<int>> a(n,vector<int>(n));
        rep(i, n) {
            a[i][0] = x[i];
            a[i][1] = y[i];
        }

        sort(a.begin(), a.end());
    
        vector<int> now = {0, 0};
        string ans = "";
        int sub;
        bool flag = true;
        rep(i, n) {
            if (now[0] == a[i][0]) {
                if (now[1] < a[i][1]) {
                    sub = a[i][1] - now[1];
                    rep(i, sub) ans += "U";
                    now[1] = a[i][1];
                    
                }else {
                    flag = false;
                    break;
                }
                
            }else if (now[0] < a[i][0]) {
                if (now[1] <= a[i][1]) {
                    sub = a[i][0] - now[0];
                    rep(i, sub) ans += "R";
                    sub = a[i][1] - now[1];
                    rep(i, sub) ans += "U";
                    now[0] = a[i][0];
                    now[1] = a[i][1];
                }else {
                    flag = false;
                    break;
                }  
            }else {
                flag = false;
                    break;
            }
        }
        if (flag == true) {
            cout << "YES" << endl;
            cout << ans << endl;
        }else cout << "NO" << endl;
        
    }

    return 0;
}