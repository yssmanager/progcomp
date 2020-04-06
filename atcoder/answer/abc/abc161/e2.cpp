#include <bits/stdc++.h>
#define FOR(i, a, n) for(int (i) = (int)(a); (i) < (int)(n); ++(i))
#define FORe(i, a, n) for(int (i) = (int)(a); (i) <= (int)(n); ++(i))
#define rFOR(i, a, n) for(int (i) = (int)(n)-1; (i) >= (int)(a); --(i))
#define REP(i, n) FOR((i), 0, (n))
#define REPe(i, n) FORe((i), 0, (n))
#define rREP(i, n) rFOR((i), 0, (n))
#define rep(i, n) FOR((i), 0, (n))
#define all(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
  int n, k, c;
  cin >> n >> k >> c;
  string s;
  cin >> s;
  auto getPos = [&]() {
    vector<int> res;
    for (int i = 0; i < n && res.size() < k;) {
      if (s[i] == 'o') {
        res.push_back(i);
        i += c+1;
      }else i++;
    }
    return res;
  };
  vector<int> l, r;
  l = getPos();
  reverse(all(s));
  r = getPos();
  // if (l.size() != k || r.size() != k) return 0;
  REP(i, r.size()) r[i] = n-1-r[i];
  reverse(all(r));
  REP(i, k) {
    if (l[i] == r[i]) cout << l[i]+1 << endl;
  }

  return 0;
}