#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // print  1 to n prime or not
    for (int i = 2; i <= n; i++)
    {
        int flag = 1; // if here flag = 0
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0; // flag becomes 1
                break;
            }
        }
        // then we have to use condition to check here like "!flag"
        if (flag)
        {
            cout << "Prime = "<<i << endl;
        }
        else
        {
            cout << "Not Prime = "<<i<< endl;
        }
    }
    return 0;
}