#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int A, B;
    int test;

    cin>>test;
    for(int i=1; i<=test; i++){
        cin>>B>>A;

        long long int n, m, x, y, result;
        n = A/9;
        m = B/9;
        x = A%9;
        y = B%9;

        result = n*6;
        result = result - (m*6);
       // cout<<x<<" "<<y<<endl;

        if(x==2)            ///for check x
            result += 1;
        else if(x == 3|| x==4)
            result += 2;
        else if(x==5)
            result += 3;
        else if(x==6 || x==7)
            result += 4;
        else if(x==8)
            result += 5;

        ///for check y

        if(y==3)
            result -= 1;
        else if(y==4|| y==5)
            result -= 2;
        else if(y==6)
            result -= 3;
        else if(y==7||y==8)
            result -= 4;
        else if(y==0)
            result +=1;


        printf("Case %d: %lli\n", i, result);
            }

        return 0;
}
