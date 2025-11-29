#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    int m = n;
    do
    {
        count++;
        m /= 10;
    } while (m > 0);
    // cout << count << endl;
    int sum = 0;
    for (int i = n; i > 0; i /= 10)
    {
        int d = i % 10;
        int power = 1;
        for (int j = 1; j <= count; j++)
        {
            power *= d;
        }

        sum+=power;
    }

    if (sum==n){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not Armstrong Number"<<endl;
    }
    return 0;
}