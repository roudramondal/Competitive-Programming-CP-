#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = arr[0];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
            index = i;
            continue;
        }
    }
    cout << ans << " " << index + 1 << endl;
    return 0;
}