#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i;
    bool iseven = false;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            iseven = true;
        }
    }
   
        if (iseven)
        {
            for (int i=2;i<=n;i+=2){
                cout << i << endl;
            }
        }
        else
        {
            cout << "-1" << endl;
        }
    

    return 0;
}