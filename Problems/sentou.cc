#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,T,x,m,a;
    cin >> n >> T;
    vector<int> t(n);
    for(int i =0; i < n; i++) cin >> t[i];
    m = T; a = x = 0;
    if(n == 1) {
        cout << T << endl;
        return 0;
    }
    for(int i = 1; i < n; i++) {
        if(t[i] <= m) {
            m = t[i] + T; 
            if(i == n-1) x += m - a;
        }
        else {
            x += m - a;
            a = t[i] ;
            m = t[i] + T;
            if(i == n-1) x += T;
            
        }
    }
    cout << x << endl;
    return 0;
}