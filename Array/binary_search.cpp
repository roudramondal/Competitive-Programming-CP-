#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == x)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "not found" << endl;
        }
        else
        {
            cout << "found" << endl;
        }
    }

    return 0;
}