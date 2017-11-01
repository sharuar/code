#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int result, n , m, test, i;


    cin>>test;
    for(i=1; i<=test; i++){

        scanf("%lli %lli", &n, &m);
        result = (m*n)/2;
        printf("Case %lli: %lli\n", i, result);
    }


    return 0;
}
