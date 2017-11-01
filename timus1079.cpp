#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a[100000];
   int n;
   while(cin>>n&&n!=0)
   {
       a[0]=0;
       a[1] = 1;

       for(int i=1; i<=n/2; i++)
       {
           a[2*i] = a[i];
           a[2*i + 1] = a[i] + a[i+1];
       }

       int mx = a[0];
       int i=1;
       while(i<=n)
       {
           if(mx<a[i])
            mx=a[i];

           i++;
       }

       cout<<mx<<endl;
   }

   return 0;
}
