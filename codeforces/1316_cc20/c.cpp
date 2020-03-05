#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

// auto mod int
struct mint {
    ll x; // typedef long long ll;
    int mod;
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
    mint& operator*=(const mint a) {
        (x *= a.x) %= mod;
        return *this;
    }
    mint operator+(const mint a) const {
        mint res(*this);
        return res+=a;
    }
    mint operator-(const mint a) const {
        mint res(*this);
        return res-=a;
    }
    mint operator*(const mint a) const {
        mint res(*this);
        return res*=a;
    }
    mint pow(ll t) const {
        if (!t) return 1;
        mint a = pow(t>>1);
        a *= a;
        if (t&1) a *= *this;
        return a;
    }

    // for prime mod
    mint inv() const {
        return pow(mod-2);
    }
    mint& operator/=(const mint a) {
        return (*this) *= a.inv();
    }
    mint operator/(const mint a) const {
        mint res(*this);
        return res/=a;
    }
};

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    vector<int> a(n), b(m);
    rep(i, n) scanf("%d", &a[i]);
    rep(i, m) scanf("%d", &b[i]);
    int nm = min(n, m);
    int ans;
    rep(i, nm) {
        mint c;
        c.x=0;
        c.mod=p;
        rep(j, i+1) {
            c+=(a[j]*b[i-j]);
        } 
        if (c.x%p!=0) {
            ans = (int) i;
            cout << ans << endl;
            return 0;
        }
    }

    return 0;
}