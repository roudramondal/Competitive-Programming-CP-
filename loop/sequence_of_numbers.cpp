#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    
    int sum=0;
   while (true)
   {
     cin>>m>>n;
     if (m>n) swap(m,n);
     if (n>0 && m>0){
        for (int i=m;i<=n;i++){
            sum+=i;
            cout<<i<<" ";
        }
        cout<<"sum = "<<sum<<endl;
        continue;
    }
    else{
        break;
    }
   }
   
    return 0;
}