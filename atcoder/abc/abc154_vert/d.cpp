#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    vector<double> e(n);
    rep(i, n) {
        cin >> p[i];
        e[i] = (p[i]+1)/2.0;
    }
    double ans = 0.0, tmp = 0.0;

    vector<double> s(n+1);
    s[0] = 0.0;
    for(int i = 1; i <= n; i++) {
        s[i] = s[i-1] + e[i-1];        
    }
    rep(i, n-k+1) {
        chmax(ans, s[i+k]-s[i]);
    }
    printf("%.10f\n", ans);

    return 0;
}