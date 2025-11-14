#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if (z>x){
        // still have something missing
        int sub=abs(z-x);
        int value=sub/y;
        cout<<value<<endl;
    }
    return 0;
}