#include<bits/stdc++.h>
using namespace std;
int main(){
    long long l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if (r1>=1&&r2>=1&&l1>=1&&l2>=1){
        if ((max(l1,l2))<=(min(r1,r2))){
        cout<<max(l1,l2)<<" "<<min(r1,r2)<<endl;
    }
    else {
        cout<<"-1"<<endl;
    }
    }
    return 0;
}