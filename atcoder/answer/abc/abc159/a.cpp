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
   int n, m;
   cin >> n >> m;
   int ans = 0;
   ans += n*(n-1)/2;
   ans += m*(m-1)/2;
   cout << ans << endl;
 
   return 0;
 }