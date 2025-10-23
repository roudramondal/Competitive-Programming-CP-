#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a+b)+c==d||(a+b)-c==d||(a+b)*c==d||(a-b)+c==d||(a-b)-c==d||(a-b)*c==d||(a*b)+c==d||(a*b)-c==d||(a*b)*c==d||(a+c)+b==d||(a+c)-b==d||(a+c)*b==d||(a-c)+b==d||(a-c)-b==d||(a-c)*b==d||(a*c)+b==d||(a*c)-b==d||(a*c)*b==d||(b+c)+a==d||(b+c)-a==d||(b+c)*a==d||(b-c)+a==d||(b-c)-c==d||(b-c)*a||(b*c)+a==d||(b*c)-a==d||(b*c)*a==d){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}