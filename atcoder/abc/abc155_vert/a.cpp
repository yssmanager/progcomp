#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int a, b, c;;
    cin >> a >> b >> c;
    
    if (a==b && b==c) cout << "No" << endl;
    else if (a!=b && b!=c && a!=c) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}