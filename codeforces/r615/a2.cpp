#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    string ans;
    int a, b, c, n;
    
    int sum, div;
    rep(i, t)  {
        cin >> a >> b >> c >> n;
        sum = (a+b+c+n);
        if (sum%3 == 0) {
            div = sum/3;
            if((a > div)||(b > div)||(c > div)) ans = "NO";
            else ans = "YES";
        }
        else ans = "NO";

        cout << ans << endl; 
    }

    return 0;
}