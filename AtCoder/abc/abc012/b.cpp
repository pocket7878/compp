#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n;
  cin >> n;
  int hou = n / 3600;
  n %= 3600;
  int min = n / 60;
  n %= 60;
  int sec = n;
  cout << setw(2) << setfill('0') << hou << ":";
  cout << setw(2) << setfill('0') << min << ":";
  cout << setw(2) << setfill('0') << sec << endl;
}
