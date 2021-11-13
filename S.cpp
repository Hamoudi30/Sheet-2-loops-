#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        long long sum = 0;
        int x, y;
        cin >> x >> y;
        for (int i = min(x, y) + 1; i < max(x, y); ++i) {
            if (i % 2)
                sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}
