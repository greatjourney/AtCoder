#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,d;
    cin >> m >> d;
    int c = 0;
    for (int i = 1; i <= m; i++) {
        for(int j = 22; j <= d; j++) {
            int a = j % 10;
            int b = j /10;
            if( a >= 2 && a * b == i ) c++;
        }
    }
    cout << c << endl;
}