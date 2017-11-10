#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;

    cin>>t;
    while(t--)
    {
        cin>>n;
        int x[n], mx = 0, mn=100;

        for(int i=0; i<n; i++){
            cin>>x[i];

            if(mx<x[i])
                mx = x[i];
            if(mn>x[i])
                mn = x[i];
        }

        int sum = mx - mn;
        printf("%d\n", 2*sum);
    }

    return 0;
}
