#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ANS(ans) cout << ans << endl


int main() {
    string s;
    cin >> s;
    if(s == "Sunny") cout << "Cloudy" << endl;
    else if(s == "Cloudy") cout << "Rainy" << endl;
    else cout << "Sunny" << endl;
}
