#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int sum = 0;
    int ans = 0;
    for (int i=0;;i++){
        sum+=i;
        if (sum>=x){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}