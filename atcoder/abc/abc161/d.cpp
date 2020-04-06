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
  queue<ll> q;
  FORe(i, 1, 9) q.push(i);
  int count = 1;
  while (k!=count) {
    ll num = q.front(); q.pop();
    ll iti = num % 10;
    FORe(i, -1, 1) {
      if((iti+i)<0||(iti+i)>9) continue;
      ll add = num*10+iti+i;
      q.push(add);
    }
    count++;
  }
  ll ans = q.front();
  cout << ans << endl;

  return 0;
}