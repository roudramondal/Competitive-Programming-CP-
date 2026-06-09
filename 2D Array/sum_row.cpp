#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    // taking input in 2d array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // taking input
            cin >> arr[i][j];
        }
    }

    // sum all the array value
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            // sum of value
            sum += arr[i][j];
        }
        // sum of row
        cout <<"row sum "<<i<<" = " << sum << endl;
    }
    // terminate the program 
    return 0;
}