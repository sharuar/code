#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tst1, tst2, x1, y1, x2, y2;
    int x, y;

    cin>>tst1;

    for(int i=1; i<=tst1; i++){

        cin >> x1 >> y1 >> x2 >> y2;


        cin >> tst2;
        printf("Case %d:\n", i);
        while(tst2--){

            cin>>x>>y;

            if(x>x1 && x<x2){
                if(y>y1 && y<y2)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
            }

            else
                cout<<"No"<<endl;

        }

    }


    return 0;
}
