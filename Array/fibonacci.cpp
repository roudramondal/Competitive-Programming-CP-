#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a = 0, b = 1;

    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    if (n == 2)
    {
        cout << 1;
        return 0;
    }

    long long fib;
    for (int i = 3; i <= n; i++)
    {
        fib = a + b;
        a = b;
        b = fib;
    }

    cout << fib;
    return 0;
}