#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int value = x / y;
         if (value>20){
            cout<<"20"<<endl;
         }
         else{
            cout<<value<<endl;
         }
    }
    return 0;
}