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

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  if ((c-a-b)<0) {
    cout << "No" << endl;
    return 0;
  }
  ll l = 4*a*b;
  ll r = (c-a-b)*(c-a-b);
  if(l<r) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}