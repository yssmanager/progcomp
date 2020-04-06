#include <bits/stdc++.h>
#define FOR(i, a, n) for(int (i) = (int)(a); (i) < (int)(n); ++(i))
#define FORe(i, a, n) for(int (i) = (int)(a); (i) <= (int)(n); ++(i))
#define rFOR(i, a, n) for(int (i) = (int)(n)-1; (i) >= (int)(a); --(i))
#define REP(i, n) FOR((i), 0, (n))
#define REPe(i, n) FORe((i), 0, (n))
#define rREP(i, n) rFOR((i), 0, (n))
#define all(v) (v).begin(), (v).end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

const int mod = 1000000007;
// const int mod = 998244353;
struct mint {
  ll x; // typedef long long ll;
  mint(ll x=0):x((x%mod+mod)%mod){}
  mint operator-() const { return mint(-x);}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod-a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) { (x *= a.x) %= mod; return *this;}
  mint operator+(const mint a) const { return mint(*this) += a;}
  mint operator-(const mint a) const { return mint(*this) -= a;}
  mint operator*(const mint a) const { return mint(*this) *= a;}
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }

  // for prime mod
  mint inv() const { return pow(mod-2);}
  mint& operator/=(const mint a) { return *this *= a.inv();}
  mint operator/(const mint a) const { return mint(*this) /= a;}
};
istream& operator>>(istream& is, const mint& a) { return is >> a.x;}
ostream& operator<<(ostream& os, const mint& a) { return os << a.x;}

int main() {
  

  return 0;
}
"": {
  "prefix": "",
  "body": [
    "// auto mod int",
    "const int mod = 1000000007;",
    "// const int mod = 998244353;",
    "struct mint {",
    "  ll x; // typedef long long ll;",
    "  mint(ll x=0):x((x%mod+mod)%mod){}",
    "  mint operator-() const { return mint(-x);}",
    "  mint& operator+=(const mint a) {",
    "    if ((x += a.x) >= mod) x -= mod;",
    "    return *this;",
    "  }",
    "  mint& operator-=(const mint a) {",
    "    if ((x += mod-a.x) >= mod) x -= mod;",
    "    return *this;",
    "  }",
    "  mint& operator*=(const mint a) { (x *= a.x) %= mod; return *this;}",
    "  mint operator+(const mint a) const { return mint(*this) += a;}",
    "  mint operator-(const mint a) const { return mint(*this) -= a;}",
    "  mint operator*(const mint a) const { return mint(*this) *= a;}",
    "  mint pow(ll t) const {",
    "    if (!t) return 1;",
    "    mint a = pow(t>>1);",
    "    a *= a;",
    "    if (t&1) a *= *this;",
    "    return a;",
    "  }",
    "",
    "  // for prime mod",
    "  mint inv() const { return pow(mod-2);}",
    "  mint& operator/=(const mint a) { return *this *= a.inv();}",
    "  mint operator/(const mint a) const { return mint(*this) /= a;}",
    "};",
    "istream& operator>>(istream& is, const mint& a) { return is >> a.x;}",
    "ostream& operator<<(ostream& os, const mint& a) { return os << a.x;}"
  ],
  "description": ""
}