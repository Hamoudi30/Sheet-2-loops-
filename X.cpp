#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int cnt = 0;
        while (n != 0) {
            int num = n % 2;
            if (num == 1)
                cnt++;
            n /= 2;
        }
        int power = 0;
        int dec = 0;
        for (int i = 0; i < cnt; ++i) {
            dec += pow(2, power);
            ++power;
        }
        cout << dec << '\n';
    }
    return 0;
}
