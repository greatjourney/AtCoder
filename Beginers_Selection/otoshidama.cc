#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,Y,x,y,z;
    cin >> n >> Y;
    x = y = z = -1;
    for(int i = 0; i <= n ; i++) {
        for(int j = n - i; j >= 0; j--) {
            if(10000*i + 5000*j + 1000* (n - i - j) == Y)  {
                x = i; y = j; z = n - i - j;
                break;
                
            }
        }
    }
    cout << x << " " << y << " " << z << endl;
    return 0;
}