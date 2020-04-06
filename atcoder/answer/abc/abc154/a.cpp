#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

int main() {
    string s, t;
    cin >> s >> t;
    int a, b;
    cin >> a >> b;
    string u;
    cin >> u;
    if (s == u) --a;
    else --b;
    printf("%d %d\n", a, b);

    return 0;
}