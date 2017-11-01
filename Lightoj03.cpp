#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, test, m;
    string a, b;

    cin>>T;
    for(int i=1; i<=T; i++){
        test = 0;
        cin>>m;
        int temp = m;

        while(m--){
            cin>>a>>b;
            if(b == "wine")
                test++;
        }

        if(test == temp)
            printf("Case %d: Yes\n", i);
        else
             printf("Case %d: No\n", i);
    }

    return 0;
}
