#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, r;
    cin >> n >> r;
    int ans = r + 100*max(0,10-n);
    cout << ans << endl;

    return 0;
}