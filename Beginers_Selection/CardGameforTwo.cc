#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,alice,bob;
    alice = bob = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(),a.end(), greater<int>());
    for(int i = 0; i < n; i++) {
        if(i%2 == 0) alice += a[i];
        else bob += a[i];
    }
    cout << alice - bob << endl;
}