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
using namespace std;
using ll = long long;
using P = pair<int,int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

// char mp[110][110];

int main() {
  int t;
  cin >> t;
  REP(i, t) {
    int n, m;
    cin >> n >> m;
    vector<string> mp(n);
    REP(i, n) {
      REP(j, m) {
        if (i%2==0) {
          if(j%2==0) mp[i].push_back('B');
          else mp[i].push_back('W');
        }else {
          if(j%2==0) mp[i].push_back('W');
          else mp[i].push_back('B');
        }
      }
    }
    if (n%2==0 && m%2==0) {
      mp[n-1][0] = 'B';
      // mp[0][m-1] = 'B';
    }else mp[n-1][m-1] = 'B';
    REP(i, n) {
      cout << mp[i] << endl;
    }
  }

  return 0;
}