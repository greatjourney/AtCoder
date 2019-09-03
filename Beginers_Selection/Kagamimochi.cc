#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,max,count;
    count =1;
    cin >> n;
    vector<int> d(n);
    for(int i = 0; i < n; i++) cin >> d[i];
    sort(d.begin(),d.end(), greater<int>());
    max = d[0];
    for(int i = 0; i < n; i++) {
        if(max > d[i]) {
            max = d[i];
            count++;
        }
    }
    cout << count << endl;
}