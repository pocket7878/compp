#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int c = 0;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s == "A") {
      c++;
    } else if (s == "Un") {
      if (c == 0) {
        cout << "NO" << endl;
        return 0;
      } else {
        c--;
      }
    }
  }
  if(c == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
