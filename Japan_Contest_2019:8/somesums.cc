#include <bits/stdc++.h>
using namespace std;

int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) { 
    sum += n % 10;
    n /= 10;
  }
  return sum;
}


int main() {
    int n,a,b,ans,sum;
    cin >> n >> a >> b;
    for(int i = 1; i <= n; i++) {
        sum = findSumOfDigits(i);
        if (sum >= a && sum <= b) {
            ans+=i;
        }
    }
    cout << ans << endl;
}