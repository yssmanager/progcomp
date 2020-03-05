#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int a[3][3];
int d[3][3];

int main() {
    rep(i, 3)rep(j, 3) cin >> a[i][j];
    int n;
    cin >> n;
    rep(ni, n) {
        int x;
        cin >> x;
        rep(i,3)rep(j,3) if(a[i][j]==x) d[i][j] = 1;
    }
    bool ans = false;
    rep(i,3) {
        int cnt = 0;
        rep(j, 3) cnt += d[i][j];
        if(cnt==3) ans = true; 
    }
    rep(i,3) {
        int cnt = 0;
        rep(j, 3) cnt += d[j][i];
        if(cnt==3) ans = true; 
    }
    {
        int cnt = 0;
        rep(j, 3) cnt += d[j][j];
        if(cnt==3) ans = true; 
    }
    {
        int cnt = 0;
        rep(j, 3) cnt += d[j][2-j];
        if(cnt==3) ans = true; 
    }
    puts(ans?"Yes":"No");

    return 0;
}