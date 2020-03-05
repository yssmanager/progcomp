#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    string s;
    cin >> s;
    vector<int> l;
    vector<int> r;
    int l_count = 0, r_count = 0;
    rep(i, s.size()) {
        if (s[i]=='(') l.push_back(i+1), l_count++;
        else r.push_back(i+1), r_count++;
    } 
    int count = min(l_count, r_count);
    sort(all(r),greater<int>());
    vector<int> r2;
    rep(i, count) {
        if (l[i]>r[i]) {
            count = i;
            break;
        }else r2.push_back(r[i]);
    } 
    sort(all(r2));
    if (count<=0) {
        cout << 0 << endl;
    }else {
        cout << 1 << endl;
        cout << 2*count << endl;
        rep(i, count) cout << l[i] << " ";
        rep(i, count) cout << r2[i] << " ";
        cout << endl; 
    }

    return 0;
}