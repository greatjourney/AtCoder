#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)

int main() {
    int n;
    int sum = 0;
    cin >> n;
    vector<int> b(n);
    for(int i = 1;i<n;i++) {
        cin >> b[i];
    }
    sum += b[1];
    for(int i = 2;i<n;i++) {
       sum += min(b[i-1],b[i]);
    }
    sum+= b[n-1];
    cout << sum << endl;
}
