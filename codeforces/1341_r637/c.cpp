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

int find(vi& v, int x) {
  REP(i, v.size()) {
    if(v[i]==x) return i;
  }
  return -1;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vi p(n+1);
    REP(i, n) cin >> p[i];
    vi b(n+1);
    b[n] = 1;
    int now = -1;
    bool ans = true;
    for(int i = 1; i <= n; i++) {
      if(now==-1) {
        now = find(p, i);
        b[now] = 1;
      }else {
        now++;
        if(p[now]==i) { }
        else if(b[now]==1) {
          now = find(p, i);
        }else {
          ans = false;
          break;
        }
        b[now] = 1;
      }
    }
    cout << (ans?"Yes":"No") << endl;
  }

  return 0;
}