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

string a2A(string s) {
  int r = s.size()-1;
  s[0] = (s[0]-'a')+'A';
  s[r] = (s[r]-'a')+'A';
  return s;
}
string A2a(string s) {
  int r = s.size()-1;
  s[0] = (s[0]-'A')+'a';
  s[r] = (s[r]-'A')+'a';
  return s;
}

int main() {
  string s;
  cin >> s;
  bool b = true;
  v(string) w;
  int l = 0;
  REP(i, s.size()) {
    if ('A'<=s[i] && s[i]<='Z') {
      if (b) {
        l = i;
        b = false;
      }else {
        w.push_back(A2a(s.substr(l, i-l+1)));
        b = true;
      }
    }
  }
  sort(all(w));
  REP(i, w.size()) cout << a2A(w[i]);
  cout << endl;

  return 0;
}