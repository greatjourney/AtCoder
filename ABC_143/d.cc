#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ANS(ans) cout << ans << endl
#define FLG(flg) if(flg) cout << "Yes" << endl; else cout << "No" << endl;
#define YES cout << "Yes" << endl;
#define NO cout << "No" << endl;
#define COUT(s) cout << s << endl;
#define AN vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];
#define IN  int n;  cin >> n;
#define VI  vector<int> 
#define SS stringstream ss;
#define SOLVE cout << solve() << endl;

int main() {
    int n;
    cin >> n;
    int a[n]; 
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    reverse(a,a+n);
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int h = j + 1; h < n; h++) {
                if (a[i] < a[j] + a[h]) sum += 1;
            }
        }
    }
    COUT(sum)
}
