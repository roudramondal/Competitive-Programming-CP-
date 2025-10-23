#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        if (ch == 'z')
        {
            cout << 'a' << endl;
        }
        else
        {
            char v = ch + 1;
            cout << v << endl;
        }
    }
    else
    {

        cout << ch << endl;
    }
    return 0;
}