#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin >> m>>n;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    // output
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        answer += arr[j - 1];
    }
    cout << answer << endl;
    return 0;
}