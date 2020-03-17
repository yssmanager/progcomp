#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int a, b;
    cin >> a >> b;
    rep(i, 10010) {
        if (i*8/100==a&&i/10==b) {
            cout << i << endl;
            return 0;
        }
    } 

    cout << -1 << endl;
    return 0;
}