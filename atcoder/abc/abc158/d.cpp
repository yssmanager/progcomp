#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    string s, s1="", s2="";
    int q;
    cin >> s >> q;
    bool flag = false;
    int count = 0;
    rep(i, q)  {
        int t;
        cin >> t;
        if (t==1) {
            flag=!flag;
            // reverse(all(s));
        }else {
            int f;
            char c;
            cin >> f >> c;
            if(flag==false){
                if (f==1) {
                    s1.insert(s1.begin(), c);
                }else {
                    s2.push_back(c);
                }
            }else {
                if (f==2) {
                    s1.insert(s1.begin(), c);
                }else {
                    s2.push_back(c);
                }
            }
        }
    }
    string ans = s1+s+s2;
    if (flag) {
        reverse(all(ans));
        // reverse(all(s1));
        // reverse(all(s2));
    }
    cout << ans << endl;

    return 0;
}