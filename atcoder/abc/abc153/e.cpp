#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<double, P> PP; 

int main() {
    int h, n;
    cin >> h >> n;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];
    vector<P> p(n);
    vector<PP> pp(n);

    int high = 0;
    vector<double> eff(n);
    rep(i, n) {
        p[i] = make_pair(a[i], b[i]);
        eff[i] = (double) a[i]/b[i];
        pp[i] = make_pair(eff[i], p[i]);
        if (i==0) continue;
        if (eff[i]>eff[high]) high = i;
    }

    sort(p.begin(), p.end());

    ll ans = 0;
    while(h > 0){
        if (h>=a[high]) {
            h -= a[high];
            ans += b[high];
        } else break;

    }
    if (h > 0) {
        ll bb, cc;
        int nic = 0;
        bb = ans + b[high];
        cc = ans;
        rep(i, n)  {
            if (p[i].first >= b[high]) {
                nic = i;
                break;
            }
        }
        for (int j = nic; j >= 0; j--) {
            ll tmpH = h;
            
            while(tmpH > 0){
            
                tmpH -= p[j].first;
                cc = ans + p[j].second;
                if (cc > bb) {
                    bb += p[j].second;
                    h = tmpH;
                }
            }

        }
        ans = bb;
    }

    cout << ans << endl;




    return 0;
}