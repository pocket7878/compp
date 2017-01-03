#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    
    int md = a % b;
    if (md == 0) {
        cout << 0 << endl;
    } else {
        cout << b - md << endl;
    }
}