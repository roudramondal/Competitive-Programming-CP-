#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   
    while (t--)
    {
        int k;
        cin>>k;
        int count=0;
       for (int i=1; ;i++)
       {
           // back to the loop
           if (i%3==0)continue;
           if (i%10==3)continue;

           count++;
           // if condition true 
           if (count==k){
            cout<<i<<endl;
            break;// break;
           }
       }
    }

    return 0;
}
