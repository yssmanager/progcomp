#include <bits/stdc++.h>

using namespace std;

int facctorialMethod(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main() {
    int n;

    cin >> n;

    int p[n], q[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }

    int nlist[n];
    for(int i = 0; i < n; i++) {
        nlist[i] = i+1;
    }

    int a = 1, b = 1;
    int kaijo;
    bool flag = false;

    kaijo = facctorialMethod(n);
    int m = kaijo;

    for(int i = 0; i < n - 1; i++) {
        m /= (n-i);
        for (int j = 0; j < n - i; j++)
        {
            if (flag == false) {
                if(p[i] == nlist[j]) {
                    a += j*m;
                    nlist[j] = nlist[j+1];
                    flag = true;
                }
            }else {
                if(j < n-i-1) {
                    nlist[j] = nlist[j+1];
                }
            }
            
        }
        flag = false;
        
    }

    m = kaijo;
    for(int i = 0; i < n; i++) {
        nlist[i] = i+1;
    }

    for(int i = 0; i < n - 1; i++) {
        m /= (n-i);
        for (int j = 0; j < n - i; j++)
        {
            if (flag == false) {
                if(q[i] == nlist[j]) {
                    b += j*m;
                    nlist[j] = nlist[j+1];
                    flag = true;
                }
            }else {
                if(j < n-i-1) {
                    nlist[j] = nlist[j+1];
                }
            }
            
        }
        flag = false;
        
    }


    cout << abs(a-b) << endl;    

    return 0;
}