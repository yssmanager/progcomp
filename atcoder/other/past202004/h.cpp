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
using vs = vector<string>;
using vp = vector<P>;
using vt = vector<T>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const int INF = 1e18;

int n, m;
int mp[52][52];
const int dx[4] = {-1, 0, 0, 1};
const int dy[4] = {0, -1, 1, 0};

ll bfs(int t, P star) {
  if(t==11) {
    return 0;
  }
  queue<P> q;
  ll dist[n][m];
  REP(i, n) REP(j, m) {
    dist[i][j] = -1;
  }
  q.push(star);
  dist[star.first][star.second] = 0;
  bool ok = true;
  ll res = -INF;

  while(1) {
    if(q.empty()) {
      return res;
    }
    
    P now = q.front(); q.pop();
    int ny = now.fi;
    int nx = now.se;
    if (mp[ny][nx] == t) {
      ll tmp = dist[ny][nx];
      star = P(ny, nx);
      ok = false;
      if(res<0) res = INF;
      chmin(res, tmp+bfs(t+1, star));
    }
     {
      REP(i, 4) {
        int ty = now.first + dy[i];
        int tx = now.second + dx[i];
        if(ty<0||ty>=n||tx<0||tx>=m) continue;
        if (dist[ty][tx] != -1) continue;
        {
          dist[ty][tx] = dist[now.first][now.second]+1;
          q.push(P(ty,tx));
        }
      }
    }
  }
}

int main() {
  
  cin >> n >> m;
  vs s(n);
  REP(i, n) cin >> s[i];
  P star;
  REP(i, n) REP(j, m) {
    if(s[i][j]=='S') {
      mp[i][j] = 0;
      star = P(i, j);
    }else if(s[i][j]=='G') {
      mp[i][j] = 10;
    }else mp[i][j] = s[i][j]-'0';
  }

  ll ans = bfs(1, star);
  // FORe(t, 1, 10) {
  //   queue<P> q;
  //   ll dist[n][m];
  //   REP(i, n) REP(j, m) {
  //     dist[i][j] = -1;
  //   }
  //   q.push(star);
  //   dist[star.first][star.second] = 0;
  //   bool ok = true;
  //   while(ok) {
  //     if(q.empty()) {
  //       cout << -1 << endl;
  //       return 0;
  //     }
  //     P now = q.front(); q.pop();
  //     int ny = now.fi;
  //     int nx = now.se;
  //     if (mp[ny][nx] == t) {
  //       ans += dist[ny][nx];
  //       star = P(ny, nx);
  //       ok = false;
  //       break;
  //     }
  //     REP(i, 4) {
  //       int ty = now.first + dy[i];
  //       int tx = now.second + dx[i];
  //       if(ty<0||ty>=n||tx<0||tx>=m) continue;
  //       if (dist[ty][tx] != -1) continue;
  //       {
  //         dist[ty][tx] = dist[now.first][now.second]+1;
  //         q.push(P(ty,tx));
  //       }
  //     }
  //   }
  // }
    

  cout << (ans>=0?ans:-1) << endl;
  return 0;
}