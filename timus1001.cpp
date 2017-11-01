#include<bits/stdc++.h>
using namespace std;

double arr[1000 * 128];

int main()
{
    unsigned long long int i=0, x;
    while(scanf("%llu", &x) != EOF){
        arr[i++] = (double)sqrt(x*1.0);
    }

    while(i-- >= 0)
        printf("%0.4lf\n", arr[i]);

    return 0;
}
