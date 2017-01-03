#include <iostream>

using namespace std;

int main() {
  double w, h;
  cin >> w >> h;
  double asp4 = 4.0 / 3.0;
  double asp = w / h;
  if (asp == asp4) {
    cout << "4:3" << endl;
  } else {
    cout << "16:9" << endl;
  }
  return 0;
}
