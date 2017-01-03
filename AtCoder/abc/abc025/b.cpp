#include <iostream>

using namespace std;

int between(int a, int b, int d) {
    if (d < a) {
        return a;
    } else if (a <= d && d <= b) {
        return d;
    } else {
        return b;
    }
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int pos = 0;
    for(int i = 0; i < n; i++) {
        string s;
        int d;
        cin >> s >> d;    
        if (s == "East") {
            pos += between(a, b, d);
        } else if (s == "West") {
            pos -= between(a, b, d);
        }
    }
    if (pos == 0) {
        cout << 0 << endl;
    } else if (pos > 0) {    
        cout << "East " << pos << endl;
    } else {
        cout << "West " << (pos * -1) << endl;
    }
}