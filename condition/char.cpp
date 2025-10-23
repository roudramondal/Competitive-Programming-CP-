#include <bits/stdc++.h>
using namespace std;
int main()
{
    char value;
    cin >> value;
    if (value >= 97 && value <= 122)
    {
        char value2 = value - 32;
        cout << value2 << endl;
    }

    else if (value >= 65 && value <= 90)
    {
        char value3 = value + 32;
        cout << value3 << endl;
    }

    return 0;
}