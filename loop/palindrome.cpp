#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    int m = n;
    while (n > 0)
    {
        int last_digit = n % 10;
        n /= 10;
        x = x * 10 + last_digit;
    }
    cout<<x<<endl;
    if (x == m)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }
    return 0;
}