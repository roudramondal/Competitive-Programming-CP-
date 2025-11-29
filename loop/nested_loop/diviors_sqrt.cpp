#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int d1 = i;
            int d2 = n / i;
            cout<<d1<<" "<<d2<<endl;
        }
    }
    return 0;
}