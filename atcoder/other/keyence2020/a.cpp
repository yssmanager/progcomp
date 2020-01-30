#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w, n;
    cin >> h >> w >> n;

    int count = 0;
    int ans = 0;

    if (w < h) {
        for (int i = 1; i <= h; i++) {
            count += h;
            ans++;
            if(count >= n) {
                cout << ans << endl;
                return 0;
            }
        }
    }else {
        for (int i = 1; i <= w; i++) {
            count += w;
            ans++;
            if(count >= n) {
                cout << ans << endl;
                return 0;
            }
        }
    }

    return 0;
}