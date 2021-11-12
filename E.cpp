#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, mx = INT_MIN;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > mx)
            mx = x;
    }
    cout << mx << endl;
    return 0;
}
