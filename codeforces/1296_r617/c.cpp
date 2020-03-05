#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main() {
    int t;
    cin >> t;
    rep(i, t) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<P, int> m;
        P now = P(0, 0);
        m[now] = 0;
        vector<P> past(n+1);
        past[0] = now;
        bool flag = false;
        for (int i = 1; i <= n; i++) {
            if (s[i-1] == 'L') now.first--;
            else if (s[i-1] == 'R') now.first++;
            else if (s[i-1] == 'U') now.second++;
            else if (s[i-1] == 'D') now.second--;
            else {
                cout << "error" << endl;
                return 0;
            }
            
            if (m.count(now) != 0) {
                cout << m[now]+1 << " " << i << endl;
                flag = true;
                break;
            // cout << pp.first << endl;
            }else {
                m[now] = i;
                past[i] = now;
            }
        
            
            
        }
        if (flag==false) cout << -1 << endl;

    }

    return 0;
}