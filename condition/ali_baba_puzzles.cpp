#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (
    (a + b) + c == d || (a + b) - c == d || (a + b) * c == d ||
    (a - b) + c == d || (a - b) - c == d || (a - b) * c == d ||
    (a * b) + c == d || (a * b) - c == d || (a * b) * c == d ||
    (a + c) + b == d || (a + c) - b == d || (a + c) * b == d ||
    (a - c) + b == d || (a - c) - b == d || (a - c) * b == d ||
    (a * c) + b == d || (a * c) - b == d || (a * c) * b == d ||
    (b + c) + a == d || (b + c) - a == d || (b + c) * a == d ||
    (b - c) + a == d || (b - c) - a == d || (b - c) * a == d ||
    (b * c) + a == d || (b * c) - a == d || (b * c) * a == d
)
    cout << "YES\n";
else
    cout << "NO\n";

    return 0;
}