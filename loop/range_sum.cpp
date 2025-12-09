#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        long long n = r - l + 1;
        long long sum;
        if (n % 2 == 0)
            sum = (n / 2) * (l + r);
        else
            sum = n * ((l + r) / 2);
            //  print sum
        cout << sum << "\n";
    }
    return 0;
}
