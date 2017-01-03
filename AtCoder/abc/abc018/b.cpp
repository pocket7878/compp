#include <iostream>

using namespace std;

int main() {
    string s;
    int n;
    cin >> s >> n;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        char buf[r - l];
        for (int j = r; j >= l; j--) {
            buf[r - j] = s[j];
        }
        for (int j = l; j <= r; j++) {
            s[j] = buf[j - l];
        }
    }
    cout << s << endl;
}