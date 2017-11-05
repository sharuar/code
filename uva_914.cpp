#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int l,int n)
{
    int m = n+1;
    bool prime[m];
    int arr[m];
    memset(arr, 0, sizeof(arr));
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    int ck = 0, a = 0;
   // cout<<l<<endl;
    for (int p=l; p<=n; p++)
    {
       // cout<<p<<endl;
       if (prime[p])
          {
              //cout<<p<<endl;
              ck++;
              if(a != 0)
              {
                  int x = p - a;
                  arr[x]++;
                  //cout<<x<<endl;
                 // cout<<arr[2]<<endl;
              }
              a = p;
          }
    }n
          int mx = 1, s;

          for(int i=1; i<=n; i++)
          {
              //cout<<arr[i]<<endl;
              if(mx<arr[i])
                {
                 mx = arr[i];
                 s = i;
                }
          }
          if(s==1||mx == 1 || ck<=2)
          {
              printf("No jumping champion\n");
              return;
          }


          int c = 0;
          for(int i=1; i<=n/2; i++)
          {
              if(mx == arr[i])
              {
                   c++;
               // cout<<c<<endl;
              }

          }

          if(c>1)
            printf("No jumping champion\n");
          else
            printf("The jumping champion is %d\n", s);
}

int main()
{
    int l,u,test;
    cin>>test;
    while(test--){
            cin>>l>>u;
       SieveOfEratosthenes(l,u);
    }

    return 0;
}
