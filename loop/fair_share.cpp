#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int value= floor(n-k*(n/(k+1)));
        cout<<value<<endl;
    }
    return 0;
}