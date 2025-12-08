#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int max_count = 0;
    for (int i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        int count = 0;
        while (n % 2 == 0)
        {
            n/=2;
            count++;
        }
        if (count > max_count)
        {
            max_count = count;
        }
    }
    cout << max_count;
    return 0;
}