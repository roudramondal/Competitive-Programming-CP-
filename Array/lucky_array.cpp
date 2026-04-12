#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minValue = arr[0];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        minValue = min(minValue,arr[i]);
        
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout<< minValue<<" ";

    return 0;
}