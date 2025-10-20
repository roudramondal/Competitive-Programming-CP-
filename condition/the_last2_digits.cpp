#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a>=2&&b>=2&&c>=2&&d>=2){
     int  res = 1;
      res = (res * (a % 100)) % 100;
      res = (res * (b % 100)) % 100;
      res = (res * (c % 100)) % 100;
      res = (res * (d % 100)) % 100;
      if (res<10){
        cout << setw(2) << setfill('0') << res;
      }
      else {
        cout<<res<<endl;
      }

    }
   
    return 0;
}