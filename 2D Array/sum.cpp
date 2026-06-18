#include <bits/stdc++.h>
using namespace std;
int main()
{
    // taking input
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    // taking input in 2d array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        // taking input in 2d array
        {
            cin >> arr[i][j];
        }
    }

    // store value in sum 
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // nested loop for column
        for (int j = 0; j < m; j++)
        {
            // add array 
            sum += arr[i][j];
        }
    }
    // output show
    cout << sum << endl;
    return 0;
