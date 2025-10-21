#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int smallest=min(a,min(b,c));
    int largest=max(a,max(b,c));
    cout<<smallest<<" "<<largest<<endl;
    return 0;
}