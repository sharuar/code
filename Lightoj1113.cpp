#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test, i;
    string current, url, cmd;

    cin>>test;
    getchar();
    for(i=1; i<=test; i++){
          stack< string > forword, backword;
        current = "http://www.lightoj.com/";

    printf("Case %d:\n", i);

    while(cin>>cmd){

        if(cmd == "VISIT"){
            cin>>url;
            backword.push(current);
            current = url;
            cout<<current<<"\n";

            while(!forword.empty())
                forword.pop();
        }

        else if(cmd == "BACK"){
            if(backword.empty())
                cout<<"Ignored"<<endl;

            else{
                forword.push(current);
                current = backword.top();
                cout<<current<<endl;
                backword.pop();
            }
        }

        else if(cmd == "FORWARD"){
            if(forword.empty())
                cout<<"Ignored"<<endl;

            else{
                backword.push(current);
                current = forword.top();
                cout<<current<<endl;
                forword.pop();
            }
        }

        else if(cmd == "QUIT")
            break;
      }
    }

    return 0;
}

