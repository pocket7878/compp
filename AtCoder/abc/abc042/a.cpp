#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  int fivecount = 0;
  int sevencount = 0;
  for(int i = 0; i < 3; i++) {
    int x;
    cin >> x;
    if (x == 5)
      fivecount++;
    if (x == 7)
      sevencount++;
  }
  if (fivecount == 2 && sevencount == 1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
