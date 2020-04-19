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

string A2a(string s) {
  s[0] += 32;
  s[s.size()-1] += 32;
  return s;
}
string a2A(string s) {
  s[0] -= 32;
  s[s.size()-1] -= 32;
  return s;
}

int main() {
  string s;
  cin >> s;
  v(string) q;
  bool odd = false;
  int star = 0;
  REP(i, s.size()) {
    if (s[i]<='Z') {
      if(odd) {
        q.push_back(A2a(s.substr(star, i-star+1)));
        odd = false;
      }else {
        star = i;
        odd = true;
      }
    }
  }
  sort(all(q));
  REP(i, q.size()) cout << a2A(q[i]);
  cout << endl;

  return 0;
}