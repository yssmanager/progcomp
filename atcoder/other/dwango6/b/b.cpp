#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x[n];
    int i = 0;
    for (i = 0; i < n; i++){
        cin >> x[i];
    }
    
    int kaijo = 1;
    for(i = 1; i < n; i++) {
        kaijo *= i;
    }

    int total = 0;
    int q;

    for (i = 0; i < n-1; i++) {
        if (i == 0){
            q = kaijo;
        }else {
            q += kaijo/2+1-i;
        }

        total += (x[i+1] - x[i]) * q;
    }

    cout << total << endl;
}