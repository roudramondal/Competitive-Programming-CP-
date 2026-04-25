#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int f[n + 1];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            // f[arr[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            f[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            f[arr[i]]++;
        }

        int result = -1;
        for (int i = 1; i <= n; i++)
        {
            if (f[i] >= 3)
            {
                result = i;
                break;
            }
        }
        cout << result << endl;
    }
    return 0;
}