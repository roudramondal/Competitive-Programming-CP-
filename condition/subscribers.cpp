#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if (n>=0&&n<=1000){
        cout<<n<<endl;
    }
    else if (n>=1000&&n<=9999){
        cout<<(n/10)*10<<endl;
    }

}