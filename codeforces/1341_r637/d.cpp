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

const int INF = 1001001001;
string ds[10] = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};

int f(int x, string s) {
  string sx = ds[x];
  int res = 0;
  REP(i, 7) {
    if(s[i]==sx[i]) continue;
    if(sx[i]=='0') return INF;
    res++;
  }
  return res;
}
bool comp(string org, string now) {
  bool res = false;
  REP(i, now.size()) {
    if(org[i]==now[i]) continue;
    if(org[i]<now[i]) res = true;
    break;
  }
  return res;
}

int main() {
  int n, k;
  cin >> n >> k;
  vs s(n);
  REP(i, n) cin >> s[i];
  v(vi) nd(n, vi(10));
  REP(i, n) {
    REP(j, 10) {
      nd[i][j] = f(j, s[i]);
    }
  }
  vs dp(k+1);
  FOR(i, 1, k+1) dp[i].push_back('0');
  REP(i, n) {
    vs dpn(k+1);
    rREP(j, 10) {
      int nx = nd[i][j];
      REPo(h, k-nx) {
        if(dp[h].size()==i) {
          if(dpn[h+nx].size()==(i+1)) {
            if(!comp(dpn[h+nx], dp[h])) continue;
          }
          dpn[h+nx] = dp[h];
          dpn[h+nx].push_back(j+'0');
        }
      }
    }
    swap(dp, dpn);
  }
  string ans = dp[k];
  if (ans.size()==n) cout << ans << endl;
  else cout << -1 << endl;

  return 0;
}