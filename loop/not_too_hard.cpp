#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,x;
    cin>>n>>x;
    int sum=0;
    for (int i=1;i<=n;i++){ 
        int s;
        cin>>s;
        if (x>=s){
          sum+=s;
        }
    }
    cout<<sum<<endl;
    return 0;
    
}