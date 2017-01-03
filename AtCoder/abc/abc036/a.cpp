#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int count = b / a;
  if (b % a != 0) {
    count++;
  }
  cout << count << endl;
}
