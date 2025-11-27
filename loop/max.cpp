#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int value = 0;
    while (t--)
    {
        int n;
        cin >> n;
        value = max(value, n);
    }
    cout << value << endl;
    return 0;
}