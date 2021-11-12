#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int check = n;
    int rev = 0;
    while (n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << rev << '\n';
    if (rev == check)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
