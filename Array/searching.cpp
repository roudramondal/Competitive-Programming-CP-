#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long x;
    cin >> x;
    bool found = false;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << i << endl;
           found = true;
           break;
        }
    }
    if (!found)
    {
        cout << -1 << endl;
    }
    return 0;
}