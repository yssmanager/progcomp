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

int main() {
  int k, n;
  cin >> k >> n;
  vector<int> a(n);
  REP(i, n) cin >> a[i];
  ll ans = 0, MX = 0;
  REP(i, n) {
    ll tmp;
    if(i!=n-1) tmp = a[i+1] -a[i];
    else tmp = k + a[0] -a[n-1];
    ans += tmp;
    chmax(MX, tmp);
  }
  ans -= MX;
  cout << ans << endl;

  return 0;
}