#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n, l;
  vector<string> lines;
  cin >> n >> l;
  for(int i = 0; i < n; i++) {
    string line;
    cin >> line;
    lines.push_back(line);
  }
  sort(lines.begin(), lines.end());
  for(int i = 0; i < n; i++) {
    cout << lines[i];
  }
  cout << endl;
}
