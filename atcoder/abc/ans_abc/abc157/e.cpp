#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n, q;
    string s;
    cin >> n >> s >> q;
    vector<set<int>> is(26);
    rep(i, n) is[s[i]-'a'].insert(i);
    rep(qi, q) {
        int ty;
        cin >> ty;
        if (ty == 1) {
            int i;
            char c;
            cin >> i >> c;
            i--;
            is[s[i]-'a'].erase(i);
            s[i] = c;
            is[s[i]-'a'].insert(i);
        }else {
            int l, r;
            cin >> l >> r;
            --l;
            int ans = 0;
            rep(i, 26) {
                auto it = is[i].lower_bound(l);
                if (it != is[i].end() && *it < r) ans++;
            }
            printf("%d\n", ans);
        }
    }

    return 0;
}