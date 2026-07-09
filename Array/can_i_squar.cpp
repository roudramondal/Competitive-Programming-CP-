#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // value store using sum
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        // square value store in ans 

        long long ans = sqrt(sum);
        // condition check here 
        if (ans * ans == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        
    }
    // terminate program
    return 0;
}