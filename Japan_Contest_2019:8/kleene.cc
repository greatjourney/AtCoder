#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    unsigned long k;
    unsigned long long c = 0;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int g = 0;
    int h = 0;
    for(int i = 0; i <  n ; i++) {
        int e = 0;
        int f = 0;
        for(int j = 0; j < n; j++) {
            if(j < i && a[j] < a[i]) e++;
            if(j > i && a[j] < a[i]) f++;

        }
        g += e;
        h += f;
    }
    c += ((g * (k-1) * k) + (h * (k+1) * k))/2;
    unsigned long d = 10e+9 + 7;
    cout << c % d << endl;
}