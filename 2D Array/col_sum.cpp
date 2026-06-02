#include <bits/stdc++.h>
using namespace std;
int main()
{
    // taking input 
    int n, m;
    // taking input 
    cin >> n >> m;
    int arr[n][m];
    // taking input in 2d array 
    for (int i = 0; i < n; i++)
    {
        // taking input
        for (int j = 0; j < m; j++)
        {
            // taking input
            cin >> arr[i][j];
        }
    }

    // Sum of all column
    for (int j = 0; j < m; j++)
    {
        // sum of column
        int sum = 0;
        for (int i = 0; i < n; i++)
        {

            // sum of column 
            sum += arr[i][j];
        }
        // sum of column
        cout << sum << endl;
    }
    // terminate program 
    return 0;
}