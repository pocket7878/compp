#include <iostream>

using namespace std;

int main() {
    int n;
    int x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0; 
    for (int j = 0; j < n; j++) {
        int mask = 1 << j;
        if (x & mask) {
            sum += a[j];
        }
    }
    cout << sum << endl;
}