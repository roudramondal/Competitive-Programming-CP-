#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int value1=2*a+1*b;
    int value2=2*x+1*y;
    if (value1>value2){
    cout<<"Messi"<<endl;
    }
    else if (value1<value2){
        cout<<"Ronaldo"<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }
    return 0;
}