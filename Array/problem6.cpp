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
        int lsd = n % 10;
        // cout<<lsd<<endl;
        int msd;
        while (n >= 10)
        {
            n /= 10;
        }
        msd = n;
        cout << lsd + msd;
    }
    cout << endl;
    return 0;
}