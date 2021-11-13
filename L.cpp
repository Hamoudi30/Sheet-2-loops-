#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y;
    int mx = -1;
    cin >> x >> y;
    for (int i = 1; i <= x && y; i++) {
        if (x % i == 0 && y % i == 0) {
            if (mx <= i) {
                mx = i;
            }
        }
    }
    cout << mx << endl;
    return 0;
}
