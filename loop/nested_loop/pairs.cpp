#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // it romve the same pairs
            if (i == j)
                continue;

                // it remove the duplicate pairs 
            if (i > j)
                continue;
            cout << "( " << i << "," << j << " )";
        }
        cout << endl;
    }

    return 0;
}