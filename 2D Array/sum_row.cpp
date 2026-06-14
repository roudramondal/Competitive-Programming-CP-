#include <bits/stdc++.h>
using namespace std;
int main()
{
    // taking input of row and column
    int n, m;
    cin >> n >> m;
    // array declaration
    int arr[n][m];
    // taking input in 2d array
    for (int i = 0; i < n; i++)
    {
        // nested loop for column
        for (int j = 0; j < m; j++)
        {
            // taking input
            cin >> arr[i][j];
        }
    }

    // sum all the array value
    for (int i = 0; i < n; i++)
    {
        // store value in sum
        int sum = 0;
        // iterate the column value 
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