#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    long double x[n], y[n];
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    long double ans, tmp, max = 0.0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            tmp = sqrt(static_cast<long double>(x[j] - x[i])*(x[j] - x[i]) + (y[j] - y[i])*(y[j] - y[i]));
            if (max < tmp) {
                max = tmp;
            }
        }
    }

    ans = max / 2.0;

    cout << fixed << setprecision(15) << ans << endl;



    return 0;
}