#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    long long int num;

    scanf("%lli", &test);

    for(int i=1; i<=test; i++){
         int one = 0;
        scanf("%lli", &num);

        while(num){
          one += num%2;
          num = num/2;
        }

       if(one%2 == 0)
         printf("Case %d: even\n", i);
    else
         printf("Case %d: odd\n", i);
    }

    return 0;
}
