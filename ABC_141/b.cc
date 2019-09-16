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
#define IN  int n;  cin >> n;
#define VI  vector<int> 
#define R0 return 0;


int main() {
    string s,L,R;
    cin >> s;
    bool flg = true;
    int l = s.length();
    REP(i,l) {
        if(i % 2 == 0) {
            if(s[i] != 'R' && s[i] != 'U' & s[i] != 'D') {
                NO
                R0
            }
        }
        else {
            if(s[i] != 'L' && s[i] != 'U' && s[i] != 'D') {
                NO
                R0
            }
        }
    }
    YES
}
