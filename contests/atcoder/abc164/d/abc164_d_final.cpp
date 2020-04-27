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
using T = tuple<int,int,int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vs = vector<string>;
using vp = vector<P>;
using vt = vector<T>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const int mod = 2019;

ll comb(ll a) {
  return a*(a-1)/2;
}

int main() {
  string s;
  cin >> s;
  int n = s.size();
  vl cnt(2019);
  cnt[0]++;
  int tmp = 0;
  int ten = 1;
  rREP(i, n) {
    tmp += (s[i]-'0') * ten;
    tmp %= mod;
    cnt[tmp]++;
    ten *= 10; ten %= mod;
  }
  ll ans = 0;
  REP(i, 2019) {
    ans += comb(cnt[i]);
  }
  cout << ans << endl;

  return 0;
}