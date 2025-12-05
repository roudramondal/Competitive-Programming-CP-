#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int sum=0;
        int l,r;
        cin>>l>>r;
        for (int i = l; i <= r; i++)
        {
           sum+=i;
        }
        cout<<sum<<endl;
        
    }
    return 0;
}