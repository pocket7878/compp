#include <iostream>

using namespace std;

int main() {
  string w;
  int char_count[26] = {0};
  cin >> w;
  for (char c : w) {
    char_count[c - 'a'] += 1;
  }
  for (int i = 0; i < 26; i++) {
    if (char_count[i] % 2 != 0) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
