#include<bits/stdc++.h>
using namespace std;


int main()
{
    int test;
    double pi, kun, r, R, n;

     pi = 2 * acos(0);

    cin>>test;


    for(int i = 1; i<=test; i++){
         cin>>R>>n;
       kun = pi / n;

    r = (R * sin(kun)) / (1 + sin(kun));

    printf("Case %d: %.10lf\n", i, r);

    }

    return 0;
}
