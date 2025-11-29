#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b;
   cin>>a>>b;
    int sum=0;
     for (int i=a;i<=b;i++){
        int last_digit=i%10;
        int first_digit=i%10;
        int x=i;
        while (x>=10)   
        {
            x/=10;
            first_digit=x;
        }
        if (first_digit==4 || last_digit==7){
            su++;
        }
        

     }
}