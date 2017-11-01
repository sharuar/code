#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin>>test_case;

   unsigned long long int arr[test_case];

    for(int i = 0; i<test_case; i++)
        cin>>arr[i];

    for(int i=0; i<test_case; i++)
    {
      double temp = sqrt(8 * arr[i] - 7);
      if(temp == (int) temp)
        cout<<"1"<<" ";
      else
        cout<<"0"<<" ";
    }
    cout<<endl;

    return 0;
}
