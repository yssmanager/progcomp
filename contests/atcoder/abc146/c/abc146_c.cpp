#include <bits/stdc++.h>
#define FOR(i, a, n) for(int (i) = (int)(a); (i) < (int)(n); ++(i))
#define FORe(i, a, n) for(int (i) = (int)(a); (i) <= (int)(n); ++(i))
#define rFOR(i, a, n) for(int (i) = (int)(n)-1; (i) >= (int)(a); --(i))
#define REP(i, n) FOR((i), 0, (n))
#define REPe(i, n) FORe((i), 0, (n))
#define rREP(i, n) rFOR((i), 0, (n))
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
using T = tuple<int,int,int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vs = vector<string>;
using vp = vector<P>;
using vt = vector<T>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll a, b, x;
bool is_ok(ll n, ll d) {
  ll tmp = a*n+b*d;
  bool res = true;
  if (tmp>x) res = false;
  return res;
}

int main() {
  cin >> a >> b >> x;
  ll d = 1;
  ll num = 1;
  while(d<11) {
    ll tn = num*10;
    ll td = d+1;
    if(!is_ok(tn, td)) break;
    num = tn;
    d = td;
  }
  ll ans = (x-b*d)/a;
  chmin(ans, num*10-1);
  chmin(ans, 1000000000LL);
  cout << ans << endl;

  return 0;
}