#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int c;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '1') c++;
    }
    cout << c << endl;
    return 0;
}