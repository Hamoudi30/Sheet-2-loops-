#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int positive = 0, negative = 0, even = 0, odd = 0;
    int num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num > 0) { positive++; }
        if (num < 0) { negative++; }
        if (num % 2 == 0) { even++; }
        if (num % 2 != 0) { odd++; }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    return 0;
}
