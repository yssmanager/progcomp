#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    ll a, b;
    ll n, sum;
    cin >> n >> a >> b;
    sum = a+b;
    ll ans = 0;
    ans = (n/sum)*a;
    ans += min(a,n%sum);

    cout << ans << endl;


    return 0;
}