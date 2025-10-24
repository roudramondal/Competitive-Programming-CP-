#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = n % 10;
    int b = n / 10;
    if (a>b)swap(a,b);
    if (a % b == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (a<b)swap(a,b);
            if (a % b == 0)
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