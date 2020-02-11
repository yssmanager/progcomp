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
    rep(i, n) cin >> p[i];
    rep(i, n) p[i]++;
    int mx = 0;
    int s = 0;
    queue<int> q;
    rep(i, n) {
        s += p[i];
        q.push(p[i]);
        if (q.size() > k) {
            s -= q.front();
            q.pop();
        }
        if (q.size() == k) {
            chmax(mx, s);
        }
    }
    double ans = mx;
    ans /= 2;
    printf("%.10f\n", ans);

    return 0;
}