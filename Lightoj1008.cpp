#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int T,l=0;
    long long int i,s,r,c;
    scanf("%d",&T);
    while(T--){
        scanf("%lld",&s);
        i=ceil(sqrt(s));
//cout<<i<<endl;
        if(i&1){
                //cout<<"odd"<<endl;
              if((i*i-s)<i){
                r=i;
                 c=i*i-s+1;
            }
            else{
                r=s-((i-1)*(i-1));
                c=i;}
        }
        else{
                //cout<<"even"<<endl;
            if((i*i-s)<i){
               c=i;
                r=i*i-s+1;
               }
              else{
                c=s-((i-1)*(i-1));
                r=i;}
            }
        printf("Case %d: %lld %lld\n",++l,c,r);
        }
    return 0;
}

