#include <iostream>

using namespace std;

int main() {
  int acc = 0;
  for(int i = 1; i <= 9; i++) {
    for(int j = 1; j <= 9; j++) {
      acc += i * j;
    }
  }
  cout << acc << endl;
}
