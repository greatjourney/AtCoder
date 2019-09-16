#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ANS(ans) cout << ans << endl


int main() {
    int n,k,q;
    cin >> n >> k >> q;
    vector<int> a(q);
    REP(i,q) cin >> a[i];
    vector<int> p(n);
    REP(i,n) p[i] = 0;
    REP(i,q) {
        p[a[i]-1] += 1;
    }
    REP(i,n) {
        if(p[i] > q-k) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
