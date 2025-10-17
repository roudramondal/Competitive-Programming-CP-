#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int value = arr[0];
        for (int i=0;i<n;i++){
            if (arr[i]>value)
            {
                value=arr[i];
            }
        }
        cout<<value<<endl;
    }
    return 0;
}