#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

const int MAX_D = 998244353;

int main() {
    int t;
    cin >> t;
    vector<int> num(100100);
    map<char,int> d;
    d['0'] = 6;
    d['1'] = 2;
    d['2'] = 5;
    d['3'] = 5;
    d['4'] = 4;
    d['5'] = 5;
    d['6'] = 6;
    d['7'] = 3;
    d['8'] = 7;
    d['9'] = 6;
    
    rep(i, t) {
        int ans = 0;
        int n;
        cin >> n;
        
        if (n < 20) {
            string sans = "";
            int n2 = n/2;
            rep(iii, n2) {
                sans += '1';
            } 
            if(n%2==1) {
                sans[0] = '7';
            }
            cout << sans << endl;
        }else if(n >= 47) {
            cout << MAX_D << endl;
        }
        else {
            string sans = "111111111";
            int score = n -16;
            rep(p, 9) {
                if (p<2) {
                    char c = '9';
                    if(score>=d[c]) {
                        sans[p] = c;
                        score -= (d[c]-2);
                    }else break;
                }
                else if (p<3) {
                    char c = '8';
                    if(score>=d[c]) {
                        sans[p] = c;
                        score -= (d[c]-2);
                    }else break;
                }
                else if (p<4) {
                    char c = '2';
                    if(score>=d[c]) {
                        sans[p] = c;
                        score -= (d[c]-2);
                    }else break;
                }
                else if (p<6) {
                    char c = '4';
                    if(score>=d[c]) {
                        sans[p] = c;
                        score -= (d[c]-2);
                    }else break;
                }
                else if (p<7) {
                    char c = '3';
                    if(score>=d[c]) {
                        sans[p] = c;
                        score -= (d[c]-2);
                    }else break;
                }
                else if (p<8) {
                    char c = '5';
                    if(score>=d[c]) {
                        sans[p] = c;
                        score -= (d[c]-2);
                    }else break;
                }
                else if (p<9) {
                    char c = '3';
                    if(score>=d[c]) {
                        sans[p] = c;
                        score -= (d[c]-2);
                    }else break;
                }
            } 
            cout << sans << endl;
        }
    }

    return 0;
}