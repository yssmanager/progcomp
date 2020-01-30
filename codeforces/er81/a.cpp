#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

const int MAX_D = 998244353;

int main() {
    int t;
    cin >> t;
    vector<int> num(100100);
    map<char,int> d;
    d['0'] = 6;
    d['1'] = 2;
    d['2'] = 5;
    d['3'] = 5;
    d['4'] = 4;
    d['5'] = 5;
    d['6'] = 6;
    d['7'] = 3;
    d['8'] = 7;
    d['9'] = 6;
    
    rep(i, t) {
        int ans = 0;
        int n;
        cin >> n;
        if (n < 20) {
            string sans = "";
            int n2 = n/2;
            rep(iii, n2) {
                sans += '1';
            } 
            if(n%2==1) {
                sans[0] = '7';
            }
            cout << sans << endl;
        }else {
            for(int e = MAX_D; e > 0; e--) {
                string s = to_string(e);
                ll tmp = 0;
                rep(j, s.size())  {
                    tmp += d[s[j]]; 
                }
                if (tmp <= n) {
                    cout << e << endl;
                    break;
                }
            }
        }
    }

    return 0;
}