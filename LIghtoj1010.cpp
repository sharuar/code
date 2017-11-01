#include<bits/stdc++.h>
using namespace std;

int main()
{

    int test, m, n, ans;
    scanf("%d", &test);

    for(int i=1; i<=test; i++){

        scanf("%d %d", &m, &n);

        int mn  = m*n;
        int x;
        if(m==1 || n==1)
            ans = mn;

        else if(m==2||n==2){

            if(m==2) x = n;
            else x = m;

            if(x%4==0) ans = x;
            else if(x%4==3) ans = x+1;
            else if(x%4==2) ans = x+2;
            else if(x%4 == 1) ans = x + 1;
        }

        else{
            if(mn&1)
                ans = (mn/2)+1;
            else
                ans = mn/2;
        }

        printf("Case %d: %d\n", i, ans);
    }

    return 0;
}
