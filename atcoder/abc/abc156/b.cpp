#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, k;
    cin >> n >> k;
    int ans = 1;
    while (n>=k) {
        n /= k;
        ans++;
    }
    cout << ans << endl;
    return 0;
}