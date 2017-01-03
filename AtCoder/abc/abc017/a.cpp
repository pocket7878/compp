#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        int s, e;
        cin >> s >> e;
        sum += (s / 10) * e;
    }
    cout << sum << endl;
}