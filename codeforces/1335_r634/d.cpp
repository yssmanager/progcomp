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
  int t;
  cin >> t;
  REP(ti, t) {
    v(string) s(9);
    REP(i, 9) cin >> s[i];
    int f0 = s[0][0];
    int f1 = s[1][3];
    int f2 = s[2][6];
    int f3 = s[3][1];
    int f4 = s[4][4];
    int f5 = s[5][7];
    int f6 = s[6][2];
    int f7 = s[7][5];
    int f8 = s[8][8];
    s[0][0] = f4;
    s[1][3] = f5;
    s[2][6] = f3;
    s[3][1] = f7;
    s[4][4] = f8;
    s[5][7] = f6;
    s[6][2] = f1;
    s[7][5] = f2;
    s[8][8] = f0;
    REP(i, 9) cout << s[i] << endl;
  }

  return 0;
}