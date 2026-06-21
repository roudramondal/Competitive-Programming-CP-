#include <bits/stdc++.h>
using namespace std;
int main()
{
    // taking array elements as input 
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int freq[101];
    for (int i = 1; i <= 100; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    int max = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
        }
    }
    cout << n - max << endl;
    return 0;
}