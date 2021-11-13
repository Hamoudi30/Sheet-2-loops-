#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int out = 1;
    while (n--) {
        cout << out << " " << out + 1 << " " << out + 2 << " PUM\n";
        out += 4;
    }
    return 0;
}
