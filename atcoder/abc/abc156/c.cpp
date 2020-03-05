#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    rep(i, n) cin >> x[i];
    ll ans = 1LL << 60;
    ll tmp;
    for(int i = 1; i < 100; i++) {
        tmp = 0;
        rep(j, n) {
            tmp += (x[j]-i)*(x[j]-i);
        } 
        chmin(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}