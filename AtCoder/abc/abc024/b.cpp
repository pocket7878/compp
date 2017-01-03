#include <iostream>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int sum = 0;
    int open = 0;
    int close = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        int at = a + t;
        if (a > close) {
            sum += close - open;
            open = a;
            close = at;
        } else {
            close = at;
        }
    }
    sum += close - open;
    cout << sum << endl;
}