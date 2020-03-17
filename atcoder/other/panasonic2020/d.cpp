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

int f(int x) {
  return
}

int main() {
  int n;
  cin >> n;
  string ans="a";
  vector<vector<int>> a(n+1);
  REPe(i, n) {
    REPe(j, i) {
      int tmp =ans[i];
      ans.push_back(f(tmp));
      if(i!=n) continue;
    }
  }

  return 0;
}