#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int d = 0;
    if((b-1)%(a-1) == 0) d=(b-1)/(a-1);
    else d = (b-1)/(a-1) +1;
    cout << d << endl;
}