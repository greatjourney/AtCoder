#include <bits/stdc++.h>
using namespace std;

int main() {
    int c = 0;
    string  s;
    string  t;
    cin >> s;
    cin >> t;
    for(int i = 0; i < 3; i++) {
        if(t[i] == s[i]) c++;
    }
    cout << c << endl;
}

