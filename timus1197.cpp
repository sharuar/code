#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin>>n;
    int a[n][n];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
    {
        cin>>x;
        a[i][j] = x;
    }

    for(int i=0; i<n; i++)
    {
        int j=i, k=0;
        while(j>=0){
            cout<<a[j--][k++]<<" ";
        }
    }

    cout<<endl;
    return 0;
}
