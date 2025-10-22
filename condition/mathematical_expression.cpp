#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    int sum1=a+b;
    int sum2=a-b;
    int sum3=a*b;
    if (s=='+'){
        if(sum1==c){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<sum1<<endl;
    }
    }
    else if (s=='-'){
        if(sum2==c){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<sum2<<endl;
    }
    }
    else if (s=='*'){
        if(sum3==c){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<sum3<<endl;
    }
    }
    return 0;
}
