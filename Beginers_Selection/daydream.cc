#include <bits/stdc++.h>
using namespace std;

int main() {
    string v;
    cin >> v;
    bool flag = true;
    string a,b,c;
    for(int i = v.length()-1; i >=0;) {
        if(i>=6) {
            a = v.substr(i-4,5);
            b = v.substr(i-5,6);
            c = v.substr(i-6,7);
        }
        else if(i >= 5) {
            a = v.substr(i-4,5);
            b = v.substr(i-5,6);
        }
        else if(i >= 4) {
            a = v.substr(i-4,5);
        }
        else {
            flag = false;
            break;
        }
        if(a =="dream" || a =="erase") i = i-5; 
        else if(b == "eraser") i = i-6;
        else if(c == "dreamer") i = i-7;
        else {
            flag = false;
            break;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}
