#include <iostream>

using namespace std;

int main() {
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    int s, t;
    cin >> s;
    cin >> t;
    if ((s + t) >= k) {
        a -= c;
        b -= c;
    }
    int res = s * a + t * b;
    cout << res << endl;
}