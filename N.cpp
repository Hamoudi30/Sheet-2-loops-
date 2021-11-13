#include <bits/stdc++.h>
using namespace std;
int main() {
    char c;
    cin >> c;
    int n;
    cin >> n;
    int x;
    while (n--) {
        cin >> x;
        while (x--)
            cout << c;
        cout << '\n';
    }
    return 0;
}
