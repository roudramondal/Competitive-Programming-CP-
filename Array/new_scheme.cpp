#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 8; i++)
    {
        if ((arr[i] <= arr[i + 1]&&arr[i+1]<=arr[i+2]&&arr[i+2]<=arr[i+3]&&arr[i+3]<=arr[i+4]&&arr[i+4]<=arr[i+5]&&arr[i+5]<=arr[i+6]&&arr[i+6]<=arr[i+7]) && arr[i] >= 100 && arr[i + 1] <= 675 && arr[i + 1] % 25 == 0)
        {
            cout << "Yes" << endl;
            break;
        }
        else
        {
            cout << "No" << endl;
            break;
        }
    }
    return 0;
}