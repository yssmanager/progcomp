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
  int k;
  cin >> k;
  vector<ll> a;
  FORe(i, 1, 9) a.push_back(i);
  while (1) {
    if (k <= a.size()) {
      cout << a[k-1] << endl;
      return 0;
    }
    k -= a.size();
    vector<ll> old;
    swap(old, a);
    for (ll x : old) {
      FORe(i, -1, 1) {
        int d = x%10 + i;
        if (d < 0 || d > 9) continue;
        ll nx = x*10 + d;
        a.push_back(nx);
      }
    }
  }

  return 0;
}