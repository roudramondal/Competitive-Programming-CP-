#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int m=n;
    do
    {
        count++;
        m/=10;
    } while (m>0);
    cout<<count<<endl;
    
}