#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, T;
    cin >> n >> T;
    vector<P> shop(n);
    rep(i, n) cin >> shop[i].first >> shop[i].second;
    vector<P> tt;
    rep(i, n)
    {
        int tmp = (T - shop[i].second) / shop[i].first;
        tt[tmp] = i;
    }
    sort(tt);
    sort(all(shop));
    int count = 0;

    return 0;
}