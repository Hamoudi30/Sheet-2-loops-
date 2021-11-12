#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
