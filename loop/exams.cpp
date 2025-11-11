#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x, y, z;
        cin >> x >> y >> z;
        double value = (z/(x*y))*100;
        // cout<<value<<endl;
        if (value > 50)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}