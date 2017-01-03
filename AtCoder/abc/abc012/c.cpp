#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int rest = 2025 - n;
  for(int i = 1; i <= 9; i++) {
    for(int j = 1; j <= 9; j++) {
      if(rest == i * j) {
        cout << i << " x " << j << endl;
      }
    }
  }
}
