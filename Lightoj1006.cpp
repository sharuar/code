#include<bits/stdc++.h>

using namespace std;
long long int dp[10000];
int a, b, c, d, e, f;
long long int fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;

    if(dp[n] != -1) return dp[n];
    else{
        dp[n] = fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6);
        return dp[n];
    }
}
int main() {

    int n, caseno = 0, cases;
    scanf("%d", &cases);

    while( cases-- ) {
        for(int i = 0; i<=10000; i++)
        dp[i] = -1;
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        //cout<<fn(n)<<endl;
        printf("Case %d: %I64d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
