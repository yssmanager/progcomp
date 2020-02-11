#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;
    rep(i, s.size()) {
        s[i] = 'x';
    }
    cout << s << endl;

    return 0;
}