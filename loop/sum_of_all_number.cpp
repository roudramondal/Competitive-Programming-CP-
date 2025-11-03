#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    // for (int i = 1; i <= 100; i++)
    // {
    //     sum += i;
    // }
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        sum+=i;
    }
    cout << sum << endl;
    return 0;
}