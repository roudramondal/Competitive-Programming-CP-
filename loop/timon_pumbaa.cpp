#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    cin >> a >> b;
    long long sub = a - b;
    if (sub >= 0)
    {
        cout << sub << endl;
    }
    else
    {
        cout << "0" << endl;
    }
    return 0;
}