#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int ans = arr[n];
    int index = n;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
           index = i;
        }
       
    }
    cout << ans << " " << index << endl;
    return 0;
}