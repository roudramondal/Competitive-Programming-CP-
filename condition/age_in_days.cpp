#include<bits/stdc++.h>
using namespace std;
int main (){
    int  n;
    cin>>n;
    int sum= (n/365);
    int rem = (n%365)/30;
    int days=(n%365)%30;
    cout<<sum <<" years"<<endl<<rem<<" months"<<endl<<days<<" days"<<endl;
    return 0;
}