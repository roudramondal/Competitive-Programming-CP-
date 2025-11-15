#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0;
    int n, k, m;
    cin >> n >> k >> m;
    for (int i = 1; i <= n - 1; i++)
    {
        int a;
        cin >> a;
        sum += a;
    }
    int remaining = m * n - sum;
    if (remaining > k)
    {
        cout << "-1" << endl;
    }
    else
    {
        if (remaining < 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << remaining << endl;
        }
    }

    return 0;
}