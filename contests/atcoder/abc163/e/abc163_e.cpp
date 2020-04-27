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
using plp = pair<ll,P>;
using T = tuple<int,int,int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vs = vector<string>;
using vp = vector<P>;
using vt = vector<T>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll a[2005];

ll dfs(priority_queue<plp> q,vi past,vi b) {
  ll MX = 0;
  ll res = 0;
  while (!q.empty()) {
    plp now = q.top(); q.pop();
    int cnum = now.second.first;
    int cpass = now.second.second;
    if(MX>now.first) break;
    if (!b[cnum]) {
      if(!past[cpass]) {
        printf("%lld %d %d\n", now.first, cnum, cpass);
        ll tmp = now.first + dfs(q, past, b);
        chmax(res, tmp);
        b[cnum] = 1;
        past[cpass] = 1;
      }else {
        if(cnum<cpass) {
          int nextp = cpass-1;
          q.push(plp(a[cnum]*(nextp-cnum),P(cnum, nextp)));
        }else if(cnum>cpass) {
          int nextp = cpass+1;
          q.push(plp(a[cnum]*(cnum-nextp),P(cnum, nextp)));
        }
      }
    }
  }
  return res;
}

int main() {
  int n;
  cin >> n;
  REP(i, n) cin >> a[i];
  vi past(n);
  vi b(n);
  ll ans = 0;
  priority_queue<plp> q;
  REP(i, n) {
    q.push(plp(a[i]*(i),P(i, 0)));
    q.push(plp(a[i]*(n-1-i),P(i, n-1)));
  }
  ans = dfs(q,past,b);
  // while (!q.empty()) {
  //   plp now = q.top(); q.pop();
  //   int cnum = now.second.first;
  //   int cpass = now.second.second;
  //   if (!b[cnum]) {
  //     if(!past[cpass]) {
  //       printf("%lld %d %d\n", now.first, cnum, cpass);
  //       ans += now.first;
  //       b[cnum] = 1;
  //       past[cpass] = 1;
  //     }else {
  //       if(cnum<cpass) {
  //         int nextp = cpass-1;
  //         q.push(plp(a[cnum]*(nextp-cnum),P(cnum, nextp)));
  //       }else if(cnum>cpass) {
  //         int nextp = cpass+1;
  //         q.push(plp(a[cnum]*(cnum-nextp),P(cnum, nextp)));
  //       }
  //     }
  //   }
  // }
  cout << ans << endl;


  return 0;
}