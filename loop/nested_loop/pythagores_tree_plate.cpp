#include<bits/stdc++.h>
using namespace std;
int main (){
    int n=100;
    // int count=0;
    for (int i=1;i<=n;i++){
        for (int j=i+1;j<=n;j++){
            for (int k=j+1;k<=n;k++){
                if (i*i+j*j==k*k){
                    // count++;
                    cout<<"( "<<i<<","<<j<<","<<k<<" )";
                }
                
            }
        }
    }
    cout<<endl;
    // cout<<count<<endl;
    return 0;
}