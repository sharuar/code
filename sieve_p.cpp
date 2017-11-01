#include<bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{

    bool prime[n+1];

    memset(prime, true, sizeof(prime));

    for(int p=2; p*p <=n; p++){
        if(prime[p] == true)
        {
           for(int j = p*2; j<=n; j += p)
         prime[j] = false;
        }


    }



    for(int p=2; p<=n; p++)
        if(prime[p])
        cout<<p<<" ";

    cout<<endl;
}



int main()
{
    int n;
    cin>>n;

    if(n>1)
        SieveOfEratosthenes(n);
    else
        cout<<"Value is less then 2"<<endl;

    return 0;
}
