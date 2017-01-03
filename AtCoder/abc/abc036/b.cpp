#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  char board[n][n];
  for(int y = 0; y < n; y++) {
    for(int x = 0; x < n; x++) {
      cin >> board[y][x];
    }
  }
  for(int y = 0; y < n; y++) {
    for(int x = 0; x < n; x++) {
      cout << board[n - x - 1][y];
    }
    cout << endl;
  }
}
