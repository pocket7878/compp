#include <iostream>

using namespace std;

int main() {
  int k, x, y;
  int n;
  cin >> n >> k >> x >> y;
  long long acc = 0;
  for (int i = 1; i <= n; i++) {
    if (i <= k) {
      acc += x;
    } else {
      acc += y;
    }
  }
  cout << acc << endl;
}
