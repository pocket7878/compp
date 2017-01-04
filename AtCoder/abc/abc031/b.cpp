#include <iostream>

using namespace std;

int main() {
    int l, h;
    cin >> l >> h;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > h) {
            cout << "-1" << endl;
        } else if (a < l) {
            cout << l - a << endl;
        } else {
            cout << 0 << endl;
        }
    }
}