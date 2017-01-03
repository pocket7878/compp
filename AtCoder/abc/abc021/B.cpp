#include <iostream>

using namespace std;

int main() {
  int n;
  int a, b;
  int k;
  cin >> n;
  cin >> a >> b;
  cin >> k;
  int v[n + 1];
  for(int i = 1; i <= n; i++) {
    v[i] = 0;
  }
  v[a] = 1;
  v[b] = 1;
  for(int i = 0; i < k; i++) {
    int p;
    cin >> p;
    if (v[p] == 1) {
      cout << "NO" << endl;
      return 0;
    } else {
      v[p] = 1;
    }
  }
  cout << "YES" << endl;
  return 0;
}
