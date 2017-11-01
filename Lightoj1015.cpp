#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
 int test, i, sum;
 char ch, ch1;

 cin>>test;

 for(i=1; i<=test; i++){

    getchar();

    int x, N;
    sum = 0;

    cin >> N;

    while(N--){
        cin >> x;
        if(x>0)
        sum += x;
    }
    printf("Case %d: %d\n", i, sum);
 }

 return 0;
}

