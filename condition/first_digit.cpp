#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n>999){
        int sum=0;
        sum=n/1000;
       if (sum%2==0){
        cout<<"EVEN"<<endl;
       }
       else{
        cout<<"ODD"<<endl;
       }
        
    }
    return 0;
}