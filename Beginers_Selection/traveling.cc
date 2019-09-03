#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

int main() {
    int n;
    cin >> n;
    vector<int> t(n),x(n),y(n);
    REP(i, n) {
        cin >> t[i] >> x[i] >> y[i];
    }
    int a,b,c;
    bool flag = true;
    a = b = c =  0;
    int d,e,f;
    REP(i, n) {
        d = abs(a-x[i]);
        e = abs(b-y[i]);
        f = t[i] - c;
        if ((d + e <= f) && ((d+e)%2 == f%2)) {
            a = x[i];
            b = y[i];
            c = t[i];
        }
        else {
            flag = false;
            break;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}