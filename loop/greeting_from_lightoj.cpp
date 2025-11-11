#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a, b;
        cin >> a >> b;
        int value = a + b;
        cout << "Case " << i << " : " << value << endl;
    }
    return 0;
}