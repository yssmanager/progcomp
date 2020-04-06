#include <bits/stdc++.h>
#define FOR(i, a, n) for(int (i) = (int)(a); (i) < (int)(n); ++(i))
#define FORe(i, a, n) for(int (i) = (int)(a); (i) <= (int)(n); ++(i))
#define rFOR(i, a, n) for(int (i) = (int)(n)-1; (i) >= (int)(a); --(i))
#define REP(i, n) FOR((i), 0, (n))
#define REPe(i, n) FORe((i), 0, (n))
#define rREP(i, n) rFOR((i), 0, (n))
#define rep(i, n) FOR((i), 0, (n))
#define all(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

set<ll> enumDivisor(ll n) {
  set<ll> res;
  for (ll i = 1; i*i <= n; ++i) {
    if (n%i) continue;
    res.insert(i);
    res.insert(n/i);
  }
  return res;
}

int main() {
  ll n;
  cin >> n;
  int ans = 0;
  for (ll x : enumDivisor(n)) {
    if (x==1) continue;
    ll tmp = n;
    while (tmp%x == 0) tmp /= x;
    tmp %= x;
    if (tmp==1) ans++;
  }
  ans += enumDivisor(n-1).size() - 1;
  cout << ans << endl;

  return 0;
}