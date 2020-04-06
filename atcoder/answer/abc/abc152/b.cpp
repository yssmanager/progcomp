#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int a, b;
    cin >> a >> b;
    string sa(b, '0'+a);
    string sb(a, '0'+b);
    cout << min(sa, sb) << endl;

    return 0;
}