#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int first = 0, second = 1;
    int third;
    for (int i = 1; i <= n; ++i) {
        if (i == 1)
            cout << first << " ";
        else if (i == 2)
            cout << second << " ";
        else {
            third = first + second;
            cout << third << " ";
            first = second;
            second = third;
        }
    }
    return 0;
}
