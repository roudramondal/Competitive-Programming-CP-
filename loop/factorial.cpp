#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long value = 1;
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            value = value * i;
        }
        cout << value << endl;
    }
    return 0;
}