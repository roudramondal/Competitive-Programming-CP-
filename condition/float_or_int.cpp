#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cin >> n;
    int sum=0;
    if (n == int(n))
    {
        cout << "int " << n << endl;
    }
    else
    {
        int sum1=n/1;
        float sum2=n-sum1;
        cout<<"float "<<sum1<<" "<<fixed<<setprecision(3)<<sum2<<endl;
    }
    return 0;
}