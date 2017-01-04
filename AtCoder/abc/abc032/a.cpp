#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    int res;
    for(res = n; res % a != 0 || res % b != 0; res++) {}
    cout << res << endl;
}