#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {

        char a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;

        auto isW = [](char x){ return x=='W' || x=='w';};

        if ((isW(a) && isW(b) && isW(c)) ||
            (isW(b) && isW(c) && isW(d)) ||
            (isW(c) && isW(d) && isW(e)) ||
            (isW(d) && isW(e) && isW(f))) 
        {
            cout << "YES" << endl;
        }
        // else condition check
         else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
