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
    int ans = arr[0];
    int ans2 = arr[0];
    int min_index = 0;
    int max_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
            min_index = i;
        }
        else if (arr[i] > ans2)
        {
            ans2 = arr[i];
            max_index = i;
        }
        
    }
    swap(arr[min_index],arr[max_index]);
    for (int i = 0; i < n; i++)
    {
        
        cout << arr[i] << " ";
    }

    return 0;
}