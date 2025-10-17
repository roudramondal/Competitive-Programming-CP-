#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int first=min(a,min(b,c));
    int third=max(a,max(b,c));
    int second=a+b+c-first-third;
    cout<<first<<" "<<second<<" "<<third<<endl;
    return 0;
}