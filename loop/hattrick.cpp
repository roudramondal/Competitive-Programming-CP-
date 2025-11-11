#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        // if (a == 119 || b == 119 || c == 119 || d == 119 || e == 119 || f == 119)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
        if (a=='w'&&b=='w'&&c== 'w'){
        cout<<"YES"<<endl;
       }
       else if (a== 'w'&&b=='w' &&c== 'w'&&d=='w'){
        cout<<"YES"<<endl;
       }
       else if (b=='w'&&c=='w'&&d=='w'){
        cout<<"YES"<<endl;
       }
       else if (b=='w'&&c=='w'&&d== 'w'&&e== 'w'){
        cout<<"YES"<<endl;
       }
       else if (c=='w'&&d=='w'&&e=='w'){
        cout<<"YES"<<endl;
       }
       else if (c=='w'&&d=='w'&&e=='w'&&f=='w'){
        cout<<"YES"<<endl;
       }
       else if (d=='w'&&e=='w'&&f=='w'){
        cout<<"YES"<<endl;
       }
       else
       {
        cout<<"NO"<<endl;
       }
    }
    return 0;
}