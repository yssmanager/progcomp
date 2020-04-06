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

int n, k, c;
string s;
int num[200005];
int dfs(int x, int d) {
  if (d == k) {
    return 1;
  }else if(x>n) return 0;
  int X = 0;
  FORe(i, x+1, n) {
    if (s[i-1]=='o') {
      int a = dfs(i+c, d+1);
      num[i] += a;
      X += a;
    }
  }
  return X;
}

int main() {
  cin >> n >> k >> c >> s;
  int count = dfs(0, 0);
  // cout << count << endl;
  FORe(i, 1, n) {
    // cout << num[i] << endl;
    if(count==num[i]) cout << i << endl;
  }

  return 0;
}