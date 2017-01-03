#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
  string cards[3];
  queue<char> qs[3];
  cin >> cards[0] >> cards[1] >> cards[2];
  int idx = 0;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < cards[i].length(); j++) {
      qs[i].push(cards[i][j]);
    }
  }
  while(!qs[idx].empty()) {
    char c = qs[idx].front();
    qs[idx].pop();
    idx = c - 'a';
  }
  cout << (char)(idx + 'A') << endl;
}
