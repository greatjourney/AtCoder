#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i = 0; i < n; i++)
#define REPR(i,n) for(int i = n; i >= 0; i--)
#define FOR(i,m,n) for(int i = m; i < n; i++)

int main() {
    int n;
    int R,C,K;
    cin >> R >> C >> K;
    cin >> n;
    vector<int> r(n);
    vector<int> c(n);
    REP(i,n) cin >> r[i] >> c[i];
    int a(R);
    int b(C);
    int x(R)(C);
    if(R >= C) {
        REP(i,C) {
            a[i] = 0; b[i] = 0; x[0][i] = 0;
        }
        FOR(i,C,R) {
            a[i] = 0; x[0][i] = 0;
        }
        FOR(i,1,R) {
            REP(j,C) {
                x[i][j] = 0;
            }
        }
    }
    else{
        REP(i,R) {
            b[i] = 0; a[i] = 0; x[i][0] = 0;
        }
        FOR(i,R,C) {
            b[i] = 0; x[i][0] = 0;
        }
        FOR(i,1,C) {
            REP(j,R) {
                x[j][i] = 0;
            }
        }

    }
    REP(i,n) {
        
    }

}
