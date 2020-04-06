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

bool isPalindrome(string s) {
  string t = s;
  reverse(all(t));
  return s == t;
}

int main() {
  string s;
  cin >> s;
  bool ans = true;
  if (!isPalindrome(s)) ans = false;
  if (!isPalindrome(s.substr(0, s.size()/2))) ans = false;
  cout << (ans ? "Yes" : "No") << endl;

  return 0;
}