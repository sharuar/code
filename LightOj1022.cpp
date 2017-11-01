#include<bits/stdc++.h>
#define pi 3.14159265358

using namespace std;

int main()
{
    int test;
    double radias, cArea, sArea, slength;

    cin>>test;

    for(int i = 1; i<=test; i++){

        cin>>radias;

        slength = 2* radias;

        sArea = pow(slength, 2);

        cArea = pi * pow(radias, 2);

        printf("Case %d: %.2lf\n", i, sArea - cArea);
    }

    return 0;
}
