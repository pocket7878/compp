#include <iostream>

using namespace std;

long long count(long long n, long long x) {
    if (n == -1) {
        return 0;
    } else {
        return n / x + 1;
    }
}

int main() {
    long long a, b, x;
    cin >> a >> b >> x;
    long long res = count(b, x) - count(a - 1, x);
    cout << res << endl;
}