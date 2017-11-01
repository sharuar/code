#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test, a, b, mx, c;
    int x, y;
    cin>>test;

    for(int i=1; i<=test; i++){

        cin>>a>>b>>c;
        if(a>b)
        {
            if(b>c){
                mx = a;
                x = b;
                y = c;
            }
            else{
                if(c>a){
                    mx = c;
                    x = a;
                    y = b;
                }
                else{
                    mx = a;
                     x = b;
                     y = c;
                }
            }
        }
        else{
            if(c>b){
                mx = c;
                x = a;
                y = b;
            }
            else{
                mx = b;
                x = a;
                y = c;
            }
        }

        int p = pow(x,2) + pow(y,2);
        double s = sqrt(p);

        if(s == mx)
            cout<<"Case "<<i<<": yes"<<endl;
        else
            cout<<"Case "<<i<<": no"<<endl;
    }

    return 0;
}
