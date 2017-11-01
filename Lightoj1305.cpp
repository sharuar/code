#include<bits/stdc++.h>
using namespace std;

int main()
{

long long Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, q;

int test;
cin>>test;

for(int i=1; i<=test; i++){
    cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;

    Dx = Ax + (Cx - Bx);
    Dy = Ay + (Cy - By);

q=((Ax*By)+(Bx*Cy)+(Cx*Dy)+(Dx*Ay))-((Ay*Bx)+(By*Cx)+(Cy*Dx)+(Dy*Ax));

    if(q<0)
        q *= -1;

   long long area = 0.5*q;


   printf("Case %d: %lli %lli %lli\n", i, Dx, Dy, area);
}


return 0;
}
