#include <iostream>
#include <string>

using namespace std;

int main() {
    string x;
    cin >> x;
    for (int i = x.size() - 1; i >= 0;) {
        char c = x[i];
        if (c == 'u' || c == 'k' || c == 'o') {
            i -= 1;
        } else if (c == 'h' && i >= 1 && x[i - 1] == 'c') {
            i -= 2;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}