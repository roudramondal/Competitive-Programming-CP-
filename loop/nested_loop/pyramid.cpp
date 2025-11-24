#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        int y=n-i;
        for (int j=1;j<=y;j++){
            cout<<" ";
        }
        int x=2*i-1;
        for (int j=1;j<=x;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}