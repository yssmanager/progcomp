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
using P = pair<int,int>;

ll choose2(ll n) {
  return n*(n-1)/2;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  REP(i, n) cin >> a[i];
  REP(i, n) a[i]--;
  vector<int> cnt(n);
  REP(i, n) cnt[a[i]]++;
  ll tot = 0;
  REP(i, n) {
    tot += choose2(cnt[i]);
  }
  REP(i, n) {
    ll ans = tot;
    ans -= choose2(cnt[a[i]]);
    ans += choose2(cnt[a[i]]-1);
    cout << ans << endl;
  }

  return 0;
}