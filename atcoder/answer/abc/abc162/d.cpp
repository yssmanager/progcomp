#include <bits/stdc++.h>
#define FOR(i, a, n) for(int (i) = (int)(a); (i) < (int)(n); ++(i))
#define FORe(i, a, n) for(int (i) = (int)(a); (i) <= (int)(n); ++(i))
#define rFOR(i, a, n) for(int (i) = (int)(n)-1; (i) >= (int)(a); --(i))
#define REP(i, n) FOR((i), 0, (n))
#define REPe(i, n) FORe((i), 0, (n))
#define REPo(i, n) FORe((i), 1, (n))
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

int main() {
  int n;
  string s;
  cin >> n >> s;
  vi a(n);
  REP(i, n) {
    if (s[i]=='R') a[i] = 0;
    if (s[i]=='G') a[i] = 1;
    if (s[i]=='B') a[i] = 2;
  }
  vl cnt(3);
  REP(i, n) cnt[a[i]]++;
  ll ans = 1;
  REP(i, 3) ans *= cnt[i];
  REP(j, n) REP(i, j) {
    int k = j + (j-i);
    if (k < n) {
      if (a[i]==a[j]) continue;
      if (a[i]==a[k]) continue;
      if (a[k]==a[j]) continue;
      ans--;
    }
  }
  cout << ans << endl;
  return 0;
}