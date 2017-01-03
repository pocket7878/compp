#include <iostream>

using namespace std;

int main() {
  int n, m, t;
  cin >> n >> m >> t;
  int lastA = 0;
  int count = 0;
  bool inRoom = true;
  cin >> lastA;
  count += lastA - m;
  for(int i = 1; i < n; i++) {
    int a;
    cin >> a;
    if ((a - lastA) > (2*m)) {
      count += ((a - lastA) - 2*m);
    }
    lastA = a;
  }
  if ((t - lastA) > m) {
    count += (t - lastA) - m;
  }
  cout << count << endl;
}
