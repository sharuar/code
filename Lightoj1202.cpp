#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    for(int i=1; i<=test; i++){

        long long int sr, sc, fr, fc;

        scanf("%lli %lli %lli %lli", &sr, &sc, &fr, &fc);

        printf("Case %d: ", i);

        if((sr==fr) && (fc==sc))
            cout<<0<<endl;

        else{
            if((sr+sc+fr+fc)%2 == 0)
            {
                if(abs(fr-sr) == abs(fc-sc))
                    cout<<1<<endl;
                else
                    cout<<2<<endl;
            }

            else
                cout<<"impossible"<<endl;
        }
    }

    return 0;
}
