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
  string s;
  cin >> s;
  int l1 = 0, r1 = (s.size()-1)/2-1, l2 = (s.size()+3)/2-1, r2 = s.size()-1;
  while(l1 < r2) {
    if(l1 < r1) {
      if(s[l1]!=s[r1]||s[l2]!=s[r2]) {
      cout << "No" << endl;
      return 0;
      }
    }
    if(s[l1]!=s[r2]) {
      cout << "No" << endl;
      return 0;
    }
    l1++; r1--;
    l2++; r2--;
  }
  
  cout << "Yes" << endl;

  return 0;
}