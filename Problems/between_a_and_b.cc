#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ANS(ans) cout << ans << endl

int main() {
    long long a,b,x;
  	long long ans = 0;
    cin >> a >> b >> x;
    ans = (b-a) / x;
    if(a % x == 0 || b % x == 0) ans +=1;
  	ANS(ans);
}
