#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

int main() {
    int n;
    cin >> n;
    int ans =0;
    int pre;
    vector<int> a(n+1),b(n+1),c(n);
    for(int i = 1;i<n+1;i++) {
        cin >> a[i];
    }
    for(int i = 1;i<n+1;i++) {
        cin >> b[i];
    }
    for(int i = 1;i<n;i++) {
        cin >> c[i];
    }
    pre=a[1];
    for(int i = 1;i<n+1;i++) {
        ans+= b[a[i]];
        if(pre+ 1 == a[i]) ans+=c[pre];
        pre = a[i];
    }
    cout << ans << endl;
}
