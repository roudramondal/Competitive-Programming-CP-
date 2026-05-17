#include <bits/stdc++.h>
using namespace std;
int main()
{
    // taing input 
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        // taking input
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Sum of all column
    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {

            sum += arr[i][j];
        }
        // sum of column
        cout << sum << endl;
    }
    return 0;
}