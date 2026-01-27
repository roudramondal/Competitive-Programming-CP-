#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    // taking input
    cin >> n >> k;
    int arr[n];
    // taking input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // output
    for (int i = n - k; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i <= n - k - 1; i++)
    {
        // output array
        cout << arr[i] << " ";
    }
    return 0;
}