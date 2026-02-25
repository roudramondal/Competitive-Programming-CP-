#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = -1;
    for (int i = 0; i < n - 1; i++)
    {
        int x = arr[i], x2 = arr[i+1];
        //    cout<<value<<" ";
        if (x2 - x <= d)
        {
            ans = x2;
            break;
        }
    }
    // call
    cout << ans << endl;

    return 0;
}