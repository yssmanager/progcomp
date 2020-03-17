#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, p;
    string s;
    cin >> n >> p >> s;
    int ans = 0;
    rep(i, n) {
        for(int j=1; i+j<=s.size(); j++) {
            int num = stoi(s.substr(i, j));
            if(num%p==0) ans++;
        }
    } 
    cout << ans << endl;
    return 0;
}