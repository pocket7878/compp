#include <iostream>

using namespace std;

int main() {
    int a, d;
    cin >> a >> d;
    int attach = (a + 1) * d;
    int defence = a * (d + 1);
    if (attach > defence) {
        cout << attach << endl;
    } else {    
        cout << defence << endl;
    }
}