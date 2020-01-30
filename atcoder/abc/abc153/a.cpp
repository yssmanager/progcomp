#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int h, a;
    cin >> h >> a;
    int ans = 0;

    ans = h/a;
    if(h%a != 0) ans++;

    cout << ans << endl;

    return 0;
}