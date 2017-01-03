#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double ap, cp;
    ap = (double)b / a;
    cp = (double)d / c;
    if (ap > cp) {
        cout << "TAKAHASHI" << endl;
    } else if (cp > ap) {
        cout << "AOKI" << endl;
    } else {
        cout << "DRAW" << endl;
    }
}