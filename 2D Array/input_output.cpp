#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[4][3];
    // taking input
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // taking input from user
            cin >> arr[i][j];
        }
    }
    // output
    cout << "Output Part" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}