#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int pow(int a, int b) {
    int x = 1;
    if (b==0) x=1;
    else {
        rep(i, b) x*=a; 
    }
    return x;
}

int main() {
    int n, m;
    cin >> n >> m;
    int s[m], c[m];
    rep(i, m) cin >> s[i] >> c[i];
    int ans = 0;
    int check[5] = {-1, -1, -1, -1, -1};
    bool ill = false;
    rep(i, m) {
        if ((check[s[i]]!=-1&&check[s[i]]!=c[i])||(n!=1&&s[i]==1&&c[i]==0)) {
            ans = -1;
            ill = true;
            break;
        }else if (check[s[i]]!=-1&&check[s[i]]==c[i]){
            continue;
        }else {
            ans += c[i]*pow(10, n-s[i]);
            check[s[i]] = c[i];
        }
    }
    string str = to_string(ans);
    if (str.size()!=n&&ill==false) ans += pow(10, n-1);
    cout << ans << endl;

    return 0;
}