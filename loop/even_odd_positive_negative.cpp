#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int counteven = 0, countodd = 0, countpositive = 0, countnegative = 0;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            counteven++;
        }
        if (n % 2 != 0)
        {
            countodd++;
        }
        if (n > 0)
        {
            countpositive++;
        }
        if (n < 0)
        {
            countnegative++;
        }
    }
    cout << "Even: " << counteven << endl;
    cout << "Odd: " << countodd << endl;
    cout << "Positive: " << countpositive << endl;
    cout << "Negative: " << countnegative << endl;
}