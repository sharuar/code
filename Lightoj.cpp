#include<bits/stdc++.h>
using namespace std;

int main()
{
  int test, position, lift_position, time;
    cin>>test;

    for(int i=1; i<=test; i++){
        cin>>position>>lift_position;

        if(position<=lift_position)
         time = lift_position*4+19;
        else{
            lift_position = position - lift_position;
             time = (position + lift_position)*4+19;
        }
        printf("Case %d: %d\n", i, time);
    }

    return 0;
}
