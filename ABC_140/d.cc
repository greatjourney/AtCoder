#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

int happiness(s) {
    int ans = 0;
    if(s[0] == "R" && s[1] == "R") ans+=1;
    for(int i = 1; i < n-1;i++) {
        if(s[i] == "L") {
            if(s[i-1] == "L") ans+=1;
        }
        else {
            if(s[i+1] == "R") ans+=1;
        }
    }
    if(s[n-1] == "L" && s[n-2] == "L") ans+=1;
    return ans;
}

int main() {

    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;

}
