#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    
    
    rep(i, t)  {
        string ans;
        int a, b, c, n;
        cin >> n;

        int max = n;

        bool flag = false;
        for(int i = 2; i <= max; i++) {
            if(n%i==0) {
                n/=i;
                max = n;
                a=i;
                flag = true;
                break;
            }else max = (n+1)/i;
        }
        if (flag == false) {
            cout << "NO" << endl;
            continue;
        }
        flag=false;
        for(int i = a+1; i <= max; i++) {
            if(n%i==0) {
                c = n/i;
                b=i;
                if (b<c) flag = true;
                break;
            }else max = (n+1)/i;
        }
        if (flag == false) {
            cout << "NO" << endl;
            continue;
        }else {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
    }

    return 0;
}