#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[4 * n - 1];
    for (int i = 0; i < 4 * n - 1; i++)
    {
        cin >> arr[i];
    }

    int F[n + 1];
    for (int i = 1; i <= n; i++)
    {
        F[arr[i]] = 0;
    }
    for (int i = 0; i < 4 * n - 1; i++)
    {
        F[arr[i]]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (F[i] == 3)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}