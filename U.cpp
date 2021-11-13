#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        int tst = i;
        int tst_sum = 0;
        while (tst > 0) {
            tst_sum += tst % 10;
            tst /= 10;
        }
        if (tst_sum >= a && tst_sum <= b)
            sum += i;
    }
    cout << sum;
    return 0;
}
