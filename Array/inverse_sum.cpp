#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }

    int arr[n + 1];
    arr[1] = s[1];
    for (int i = 2; i <= n; i++)
    {
        arr[i] = s[i] - s[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // commit
    return 0;
}