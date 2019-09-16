#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ANS(ans) cout << ans << endl
#define FLG(flg) if(flg) cout << "Yes" << endl; else cout << "No" << endl;
#define YES cout << "Yes" << endl;
#define NO cout << "No" << endl;
#define AN vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> b(n);
    AN
    vector<int> c(n);
    REP(i,n) b[i] = 0;
    sort(a.begin(),a.end(), greater<int>());
    c = a;
    int i = 0;
    long sum = 0;
    int max = a[0];
    int max_number = 0;
    REP(i,m) {
        REP(j,n) {
            if(max < a[j]) {
                max = a[j];
                max_number = j;
                break;
            }
        }
        b[max_number] += 1;
        a[max_number] = c[max_number]/pow(2,b[max_number]);
        max = a[max_number];
    }
    REP(i,n) sum+=a[i];
    cout << sum << endl;
}
