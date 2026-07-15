#include <bits/stdc++.h>
using namespace std;
int main()
{
    // taking input 
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // output part
    int ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i-1])
        {
            ans = arr[i];
           
        }
        else{
            break;
        }
    }
    //printing the answer
    cout << ans << endl;
    // terminate program
    return 0;
}