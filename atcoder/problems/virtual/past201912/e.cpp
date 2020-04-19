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
using vp = vector<P>;
using vt = vector<T>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int n ,q;
  cin >> n >> q;
  v(string) f(n);
  REP(i, n) f[0].push_back('N');
  FOR(i, 1, n) f[i] = f[0];
  REP(qi, q) {
    int x, a, b;
    cin >> x;
    if (x==1) {
      cin >> a >> b;
      a--; b--;
      f[a][b] = 'Y';
    }
    else if (x==2) {
      cin >> a;
      a--;
      v(string) g = f;
      REP(i, n) {
        if (i==a) continue;
        if (g[i][a]=='Y') f[a][i] = 'Y';
      }
    }
    else {
      cin >> a;
      a--;
      v(string) g = f;
      REP(i, n) {
        if (i==a) continue;
        if (g[a][i]=='Y') {
          REP(j, n) {
            if(j==a) continue;
            if (g[i][j]=='Y') f[a][j] = 'Y';
          }
        }
      }
    }
  }
  REP(i, n) cout << f[i] << endl;

  return 0;
}