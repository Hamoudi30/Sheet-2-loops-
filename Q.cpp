#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        int n = int(s.size());
        for (int i = n - 1; i >= 0; --i)
            cout << s[i] << ' ';
        cout << '\n';
    }
    return 0;
}
