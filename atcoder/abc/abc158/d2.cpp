#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    string s = "";
    s.reserve(1001001);
    int q;
    cin >> s >> q;
    vector<char> sv(s.size());
    rep(i, s.size())  {
        sv[i]=s[i];
    }
    rep(i, q)  {
        int t;
        cin >> t;
        if (t==1) {
            reverse(all(sv));
        }else {
            int f;
            char c;
            cin >> f >> c;
            if (f==1) {
                sv.insert(sv.begin(), c);
            }else {
                sv.push_back(c);
            }
        }
    }
    rep(i, sv.size()) {
        printf("%c", sv[i]);
    } 
    cout << endl;

    return 0;
}