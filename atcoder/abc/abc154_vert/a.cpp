#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main() {
    string s, t, u;
    int a, b;
    cin >> s >> t >> a >> b >> u;
    if (s == u) a--;
    else b--;

    cout << a << " " << b << endl;

    return 0;
}