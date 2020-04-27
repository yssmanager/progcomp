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

int main() {
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    vi a(n);
    REP(i, n) cin >> a[i];
    vi b(n), c(n);
    REPe(i, n-2) {
      if(a[i-1]<a[i] && a[i]>a[i+1]) b[i] = 1;
    }
    REPe(i, n-1) c[i] = c[i-1] + b[i];
    int ans = 0;
    int MA = 0;
    REP(i, n-k+1) {
      int tmp = c[i+k-1] - c[i];
      if(b[i+k-1]) tmp--;
      if(b[i]) tmp--;
      bool ch = chmax(ans, tmp);
      if(ch) MA = i;
    }
    printf("%d %d\n", ans+1, MA+1);

  }

  return 0;
}