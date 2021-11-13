#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    long long s = 0;
    while (cin >> a >> b && (a >= 1 && b >= 1)) {
        if (a > b)
            swap(a, b);
        for (int i = a; i <= b; ++i) {
            s += i;
            cout << i << " ";
        }
        cout << "sum =" << s << endl;
        s = 0;
    }
    return 0;
}
