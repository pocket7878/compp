#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 0)
            continue;
        count += a;
        sum += 1;
    }
    int res = (int)ceil((double)count / (double)sum);
    cout << res << endl;
}