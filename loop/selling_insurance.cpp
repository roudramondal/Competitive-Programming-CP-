#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x;
        cin >> x;
        double value = (20 * x) / 100;
        // cout<<value<<endl;
        int value2 = double(ceil(100 / value));
        cout << value2 << endl;
    }
    return 0;
}