#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,x;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;
    int d,e,f,ans;
    d = min(x/500 , a);
    for(int i = 0; i <= d; i++) {
        f = x - 500 * i;
        e = min(f/100 , b);
        for (int j = 0; j <=e; j++) {
            f = f - 100 * j;
            if(c >= f/50) ans++;
        }

    }
    cout << ans << endl;
    return 0;
}