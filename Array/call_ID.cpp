#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input taking 
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    // frequency array 
    int freq[n + 1];
    for (int i = 1; i <= n; i++)
    {
        freq[i] = 0;
    }
//  frequency 
    for (int i = 1; i <= n; i++)
    {
        if (freq[i] == 0)
        {
            freq[arr[i]] = 1;
        }
    }

    //  value sto
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (freq[i] == 0)
        {
            ans++;
        }
    }

    cout << ans << endl;
    for (int i = 1; i <= n; i++)
    {
        if (freq[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}