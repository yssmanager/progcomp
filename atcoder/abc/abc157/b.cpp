#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int a[3][3];
    rep(i, 3) {
        rep(j, 3) {
            cin >> a[i][j];
        } 
    } 
    int n;
    cin >> n;
    vector<int> b(n);
    rep(i, n) cin >> b[i];
    bool bingo = false;
    int c[3][3] = {};
    rep(h, n) {
        rep(i, 3) {
            rep(j, 3) {
                if(a[i][j]==b[h]) c[i][j] = 1;
            } 
        } 
    } 
    rep(i, 3) {
        if (c[i][0]*c[i][1]*c[i][2]==1||c[0][i]*c[1][i]*c[2][i]==1) {
            bingo = true;
            break;
        }
    } 
    if (c[0][0]*c[1][1]*c[2][2]==1||c[0][2]*c[1][1]*c[2][0]==1) {
        bingo = true;
    }

    if(bingo) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
}