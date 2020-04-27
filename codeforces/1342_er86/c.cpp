#include <bits/stdc++.h>
#define FOR(i, a, n) for(int (i) = (int)(a); (i) < (int)(n); ++(i))
#define FORe(i, a, n) for(int (i) = (int)(a); (i) <= (int)(n); ++(i))
#define rFOR(i, a, n) for(int (i) = (int)(n)-1; (i) >= (int)(a); --(i))
#define rFORe(i, a, n) for(int (i) = (int)(n); (i) >= (int)(a); --(i))
#define REP(i, n) FOR((i), 0, (n))
#define REPe(i, n) FORe((i), 1, (n))
#define REPo(i, n) FORe((i), 0, (n))
#define rREP(i, n) rFOR((i), 0, (n))
#define rREPe(i, n) rFORe((i), 1, (n))
#define rREPo(i, n) rFORe((i), 0, (n))
#define rep(i, n) FOR((i), 0, (n))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define fi first
#define se second
#define dup(x, y) (((x)+(y)-1)/(y))
#define v(T) vector<T>
#define vv(T) v(v(T))
using namespace std;
using ll = long long;
using P = pair<int,int>;
using pl = pair<ll,ll>;
using T = tuple<int,int,int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vs = vector<string>;
using vp = vector<P>;
using vt = vector<T>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

// GCD, LCM
ll lcm(ll a, ll b) { return a/gcd(a, b)*b;}

int main() {
  int t;
  cin >> t;
  while(t--) {
    ll a, b;
    int q;
    cin >> a >> b >> q;
    REP(qi, q) {
      ll l, r;
      cin >> l >> r;
      // vi ma(a, r/a-l/a);
      // FOR(i, l%a, a) ma[i]++;
      // FOR(i, r%a+1, a) ma[i]--;
      // vi mb(b, r/b-l/b);
      // FOR(i, l%b, b) mb[i]++;
      // FOR(i, r%b+1, b) mb[i]--;
      ll lcmab = lcm(a, b);
      vi mab(lcmab, r/lcmab-l/lcmab);
      FOR(i, l%lcmab, lcmab) mab[i]++;
      FOR(i, r%lcmab+1, lcmab) mab[i]--;
      
      int d1, d2;
      vi boo(lcmab);
      ll ans = 0;
      for(int i = 0; i < lcmab; i++) {
        d1 = i%a%b;
        d2 = i%b%a;
        if(d1[i]!=d2[i]) ans += mab[i];
      }
      
      printf("%lld%c",ans, (qi==q-1?'\n':' '));
    }

  }

  return 0;
}