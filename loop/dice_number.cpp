#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        int mx = a;
        int mn = a;
        int sum = a + b + c;
        if (b > mx)
            mx = b;
        if (c > mx)
            mx = c;
        if (b < mn)
            mn = b;
        if (c < mn)
            mn = c;
        int x = sum - mx - mn;
        int alice = mx * 100 + x * 10 + mn;

        mx = d;
        mn = d;
        sum = d + e + f;

        if (e > mx)
            mx = e;
        if (f > mx)
            mx = f;
        if (e < mn)
            mn = e;
        if (f < mn)
            mn = f;
        d = sum - mx - mn;
        int bob = mx * 100 + d * 10 + mn;
        if (alice>bob){
            cout<<"Alice"<<endl;
        }
        else if (alice<bob){
            cout<<"Bob"<<endl;
        }
        else {
            cout<<"Tie"<<endl;
        }
    }
    return 0;
}