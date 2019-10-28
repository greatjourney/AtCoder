#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ANS(ans) cout << ans << endl;
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
    long double a, b, x,ans;
    cin >> a >> b >> x;
    cout << setprecision(12);
    if(x >= (a * a * b) /2 )  ans = (180 * atan((2 * (a * a * b - x)) / (a * a * a))) / M_PI;
    else ans = (180 * atan((a * b * b) / (2 * x)) / M_PI);
    cout << ans << endl;
}