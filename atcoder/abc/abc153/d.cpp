#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    ll h;
    cin >> h;

    ll i = 0;
    ll ans = 0;

    while (h != 0) {
        h /= 2;
        ans += pow(2, i);
        i++;
    }

    cout << ans << endl;


    return 0;
}