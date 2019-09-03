#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int c = 0;
    cin >> n;
    int l[n];
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    while(true) {
        int i;
        for (i = 0; i < n; i++) {
            if (l[i] %2 != 0) {break;}
            l[i] = l[i] /2;
        }
        if (i != n) {break;}
        c++;
    }
    cout << c << endl;
    return 0;
}
