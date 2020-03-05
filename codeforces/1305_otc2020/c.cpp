#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;



int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> mod(m);
    map<int, int> mp;

    rep(i, n) {
        int k = a[i]%m;
        mod[k]++;
        if(mp.find(k)!=end(mp)) {
            cout << 0 << endl;
            return 0;
        }else {
            mp[k] = a[i];
        }
    }
    ll ans = 1;
    rep(i, m)  {
        for (int j = i+1; j < m; j++) {
            if(mod[i]*mod[j]) (ans *= abs(mp[j]-mp[i])) %= m;
        }
    }
    cout << ans << endl;

    return 0;
}