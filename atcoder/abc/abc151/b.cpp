#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, m;

    cin >> n >> k >> m;

    int a[n-1];
    for (int i = 0; i < n-1; i++)
    {
        cin >> a[i];
    }

    int ans = n * m;
    for(int i = 0; i < n-1; i++) {
        ans -= a[i];
    }

    if (ans <= 0 ) {
        cout << 0 << endl;
    }else if(ans <= k){
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    



    return 0;
}