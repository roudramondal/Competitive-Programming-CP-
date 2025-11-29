#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int flag = 1;// if here flag = 0 
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;// flag becomes 1 
            break;
        }
    }
    // then we have to use condition to check here like "!flag"
    if (flag)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
    return 0;
}