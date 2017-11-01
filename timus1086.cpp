#include<bits/stdc++.h>
using namespace std;

#define Max 200000
vector <long int>v;

bitset<Max>bt;
bool isprime(long int n)
{
   for(long int i=2; i<=sqrt(n); i++)
   {
     if(n%i==0)return false;
   }
   return true;
}
void sieve()
{
   v.push_back(2);
   for(int i=3; i<=Max; i+=2)
   {
      if(isprime(i))v.push_back(i);
   }

}

int main()
{
   sieve();
   long int p;
   int kase;

   scanf("%d",&kase);

   while(kase--)
   {
      scanf("%ld",&p);
      cout << v[p-1] << endl;
   }
}
