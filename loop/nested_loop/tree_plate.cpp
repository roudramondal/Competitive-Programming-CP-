#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int count=0;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for (int k=1;k<=n;k++){
               // this part show two digit are same 
               if (i==j&&j!=k)count++;
               if(i==k&&i!=j)count++;
               if (j==k&&i!=j)count++;
                cout<<"( "<<i<<","<<j<<","<<k<<")";
            }
           
        }
         cout<<endl;
    }

    cout<<count<<endl;
    return 0;
}