#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a[105], s=0;
    scanf("%d", &n);
    int num = (n+1)/2;
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    sort (a, a+n);
    for(int i=0; i<num; i++) s += (a[i]+1)/2;
    printf("%d\n", s);
    return 0;
}
