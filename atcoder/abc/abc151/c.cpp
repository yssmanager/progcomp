#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (m == 0) {
        cout << 0 << " " << 0 << endl;
        return 0;
    }

    int p[m];
    string s[m];

    for(int i = 0; i < m; i++) {
        cin >> p[i] >> s[i];
    }

    int a = 0, b = 0;
    bool f[n];
    for(int i = 0; i < n; i++) {
        f[i] = false;
    }

    for(int i = 0; i < m; i++) {
        if (f[p[i] - 1] == false){
            if(s[i] == "AC") {
                a++;
                f[p[i] - 1] = true;
            }else
            {
                b++;
            }
            
        }
    }

    cout << a << " " << b << endl;


    return 0;
}