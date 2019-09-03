#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    int c,d;
    d = 0;
    for(int i = 0; i< n; i++) cin >> h[i];
    for(int i = 0; i< n;) {
        int a = h[i];
        c = 0;
        for(int j = i+1; j< n; j++) {
            if(a >= h[j]) c++;
            else break;
            a = h[j];
        }
        if(d <= c) d = c;
        i+=c+1;
    }
    cout << d << endl;
}