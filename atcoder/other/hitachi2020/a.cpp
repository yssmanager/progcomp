#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    cin >> s;
    if(s.size()%2==1) {
        cout << "No" << endl;
        return 0;
    }
    for(int i = 0; i < s.size()-1; i+=2) {
        if(s.substr(i, 2)!="hi") {
            cout << "No" << endl;
            return 0;
        }
    } 
    cout << "Yes" << endl;
    return 0;
}