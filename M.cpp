#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    bool found = false;
    bool lucky;
    for (int i = a; i <= b; ++i) {
        int tmp = i;
        lucky = true;
        while (tmp > 0) {
            int last = tmp % 10;
            if (last == 7 || last == 4) {
                tmp /= 10;
            } else {
                lucky = false;
                break;
            }
        }
        if (lucky) {
            cout << i << " ";
            found = true;
        }
    }
    if (not found)
        cout << -1;
    return 0;
}
