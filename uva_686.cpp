#include<bits/stdc++.h>

using namespace std;

void sieve(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for(int i=2; i*i<=n; i++)
    {
        if(prime[i] == true)
        {
            for(int p = 2*i; p<=n; p += i)
                prime[p] = false;
        }
    }
    int x, cont = 0;

    for(int i=2; i<=n/2; i++)
    {
        if(prime[i])
        {
                x = n-i;
                if(prime[x])
                    cont++;
        }
    }

    printf("%d\n", cont);
}


int main()
{
    int n;
    cin>>n;
    while(n!=0){
      sieve(n);
      cin>>n;
    }


    return 0;
}
