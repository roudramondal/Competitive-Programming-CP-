#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input array size 
    int n;
    cin >> n;
    // array size 
    int arr[n];
    // for input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // for output
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}