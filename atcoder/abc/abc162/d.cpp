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
  int n;
  string s;
  cin >> n;
  cin >> s;
  vi r, g, b;
  ll ans = 0;
  REP(i, n) {
    if(s[i]=='R') r.push_back(i);
    else if(s[i]=='G') g.push_back(i);
    else if(s[i]=='B') b.push_back(i);
  }
  if(r.size()>b.size()) swap(r, b);
  if(g.size()>b.size()) swap(g, b);
  set<int> bs;
  REP(i, b.size()) bs.insert(b[i]); 
  REP(i, r.size()) {
    REP(j, g.size()) {
      int dif = abs(r[i]-g[j]);
      ans += b.size();
      auto res = bs.find(r[i]+(g[j]-r[i])/2);
      if(!(dif%2) && res != bs.end()) ans--;
      res = bs.find(r[i]-dif);
      if(res != bs.end()) ans--;
      res = bs.find(r[i]+dif);
      if(res != bs.end()) ans--;
      res = bs.find(g[j]-dif);
      if(res != bs.end()) ans--;
      res = bs.find(g[j]+dif);
      if(res != bs.end()) ans--;
    } 
  } 
  cout << ans << endl;

  return 0;
}