#include<bits/stdc++.h>
using namespace std;
int main (){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    double sum1= (b*log(a));
    double sum2=(d*log(c));
    cout<<sum1<<" "<<sum2<<endl;
    if(sum1>sum2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}