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

int main() {
  string s;
  cin >> s;
  int n = s.size();
  set<string> x;
  x.insert(".");
  REP(i, n) x.insert(s.substr(i,1));
  if (s.size() >= 2) {
    REP(i, n-1) {
      string t = s.substr(i, 2);
      x.insert("..");
      x.insert("."+t.substr(1,1));
      x.insert(t.substr(0,1)+".");
      x.insert(t);
    }
  }
  if (s.size() >= 3) {
    REP(i, n-2) {
      string t = s.substr(i, 3);
      x.insert("...");
      x.insert(t.substr(0,1)+"..");
      x.insert("."+t.substr(1,1)+".");
      x.insert(".."+t.substr(2,1));
      x.insert("."+t.substr(1,2));
      x.insert(t.substr(0,1)+"."+t.substr(2,1));
      x.insert(t.substr(0,2)+"..");
      x.insert(t);
    }
  }
  cout << x.size() << endl;

  return 0;
}