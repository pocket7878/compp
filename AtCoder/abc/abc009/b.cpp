#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
    int a;
  cin >> n;
  vector<int> as;
  as.reserve(n);
  for(int i = 0; i < n; i++) {
    cin >> a;
    as.push_back(a);
  }
  sort(as.begin(), as.end());
  as.erase(unique(as.begin(), as.end()), as.end());
  cout << as[as.size() - 2] << endl;
}
