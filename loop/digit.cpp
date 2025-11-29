#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=1;i<=t;i++){
        long long digit;
        cin>>digit;
       if (digit==0){
        cout<<"0";
       }
       else{
         while (digit>0)
        {
        long long value = digit%10;
        digit/=10;
        cout<<value<<" ";
        }
       }
        cout<<endl;
    }
    return 0;
}