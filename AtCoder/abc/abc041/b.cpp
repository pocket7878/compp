#include <iostream>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    a %= 1000000007;
    b %= 1000000007;
    c %= 1000000007;
    long long res = (((a * b) % 1000000007) * c) % 1000000007;
    cout << res << endl;
}