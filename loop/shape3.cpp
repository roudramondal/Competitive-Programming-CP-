#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        int y=n-i;
        for (int j=1;j<=y;j++)
        {
            cout<<" ";
        }
        int x=i*2-1;
        for (int j=1;j<=x;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    // second part
    for (int i=n;i>=0;i--){
        int y=n-i;
        for (int j=1;j<=y;j++)
        {
            cout<<" ";
        }
        int x=i*2-1;
        for (int j=1;j<=x;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}