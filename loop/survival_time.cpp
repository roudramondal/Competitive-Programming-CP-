#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, d;
        cin >> n >> x >> d;
        int value1 = x * 5;
        int value2=n/value1;
        int value3= d+value2;
        cout<<value3<<endl;
    }
    return 0;
}