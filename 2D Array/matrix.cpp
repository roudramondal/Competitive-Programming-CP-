#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += arr[i][i];
    }
    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        sum2 += arr[i][j];
    }
    int ans = abs(sum1 - sum2);
    cout << ans << endl;

    return 0;
}