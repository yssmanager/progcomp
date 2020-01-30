#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s[n];
    int t[n];

    for (int i = 0; i < n; i++){
        cin >> s[i] >> t[i];
    }

    string x;
    cin >> x;

    bool flag = false;
    int total = 0;

    for (int i = 0; i < n; i++) {
        if(flag == false) {
            if(x == s[i]) {
                flag = true;
            }
        }else {
            total += t[i];
        }

    }

    cout << total << endl;
}