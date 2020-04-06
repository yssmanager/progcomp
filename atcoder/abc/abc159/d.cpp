#include <bits/stdc++.h>
#define FOR(i, a, n) for(int (i) = (int)(a); (i) < (int)(n); ++(i))
#define FORe(i, a, n) for(int (i) = (int)(a); (i) <= (int)(n); ++(i))
#define rFOR(i, a, n) for(int (i) = (int)(n)-1; (i) >= (int)(a); --(i))
#define REP(i, n) FOR((i), 0, (n))
#define REPe(i, n) FORe((i), 0, (n))
#define rREP(i, n) rFOR((i), 0, (n))
#define all(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using P = pair<ll,ll>;

ll comb(ll x) {
  ll y = x*(x-1)/2;
  return y;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i, n) cin >> a[i];
  map<int, P> mp;
  REP(i, n) mp[a[i]].first++;
  ll sum = 0;
  for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
    itr->second.second = comb(itr->second.first);
    sum += itr->second.second;
  }
  REP(i, n) {
    ll ans = sum - mp[a[i]].second + comb(mp[a[i]].first-1);
    printf("%lld\n", ans);
  }

  return 0;
}