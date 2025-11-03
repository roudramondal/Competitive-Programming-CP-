#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    // for odd number
    // for (int i=1;i<=n;i+=2){
    //     sum+=i;
    // }

    // for even number
    for (int i = 2; i <= n; i += 2)
    {
        cout<<i<<endl;
        sum += i;

    }
    cout << sum << endl;
}