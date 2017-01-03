#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int next = (n + 1) % 12;
  if (next == 0)
    next = 12;
  cout << next << endl;
  return 0;
}
