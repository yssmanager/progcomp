#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x[n], l[n];
    long left[n], right[n];
    int lh[n], rh[n];
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> l[i];
        left[i] = x[i] - l[i];
        right[i] = x[i] + l[i];
        lh[i] = 0;
        rh[i] = 0;
    }
    int tt = 0;
    int tf = 0;
    int c = 0;
    for(int i = 0; i < n; i++) {
        
        for(int j = 0; j < i; j++) {
            if(x[i] > x[j]) {
                if (left[i] < right[j]) {
                    lh[i]++;
                    rh[j]++;
                    c++;
                }
            } else {
                if (left[j] < right[i]) {
                    lh[j]++;
                    rh[i]++;
                    c++;
                }
            }
        }
    }

    
    for (int i = 0; i < n; i++) {
        if((lh[i]>0)&&(rh[i]>0)) tt++;
        else if((lh[i]>0)||(rh[i]>0)) tf++;
    }
    cout << n-(tf-c+tt) << endl;
    return 0;
}