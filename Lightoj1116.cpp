#include<bits/stdc++.h>
using namespace std;

unsigned long long int evenck(unsigned long long int n){
//cout<<n<<endl;

if(n==0) return 0;
if(n%2==1) return 1;

return 2*evenck(n/2);
}


int main()
{

    int test;
    unsigned long long int n, x, i, even, odd;

    scanf("%d", &test);
    for(int j = 1; j<=test; j++){
        scanf("%llu", &n);

        x = evenck(n);

        if(x==0 || x==1)
            printf("Case %d: Impossible\n", j);
        else{
            even = x;
            odd = n/x;
            if(odd == 1)
            {
              printf("Case %d: Impossible\n", j);
              continue;
            }
            printf("Case %d: %llu %llu\n", j, odd, even);
        }
    }

    return 0;
}
