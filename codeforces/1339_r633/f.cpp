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

bool is_prime(int n) {
  for (int i = 2; i*i <= n; i++) {
    if (n%i == 0) return false;
  }
  return n != 1;
}

vector<int> divisor(int n) {
  vector<int> res;
  for (int i = 1; i*i <= n; i++) {
    if (n%i == 0) {
      res.emplace_back(i);
      if (i != n/i) res.emplace_back(n/i);
    }
  }
  return res;
}

map<int, int> prime_factor(int n) {
  map<int, int> res;
  for (int i = 2; i*i <= n; i++) {
    while (n%i == 0) {
      ++res[i];
      n /= i;
    }
  }
  if (n != 1) res[n] = 1;
  return res;
}

int main() {
  int n;
  cin >> n;
  vi f = divisor(n);
  bool ok = is_prime(n);
  map<int,int> mp = prime_factor(n);
  sort(all(f));
  REP(i, f.size()) printf("%d%c", f[i], (i==f.size()-1?'\n':' '));
  puts(ok?"Yes":"No");
  for (const auto& [key, value] : mp) {
    printf("%d^%d ", key, value);
  }
  printf("\n");

  return 0;
}