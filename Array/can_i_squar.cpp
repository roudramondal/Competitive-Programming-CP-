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
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        long long ans = sqrt(sum);
        if (ans * ans == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        // cout << endl;
    }
    return 0;
}