#include <iostream>
#include <utility>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int txa, tya, txb, tyb, t , v, n;
  cin >> txa >> tya >> txb >> tyb >> t >> v;
  cin >> n;
  int maxDist = t * v;
  for(int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    double dist;
    dist = sqrt(pow(x - txa, 2) + pow(y - tya, 2));
    dist += sqrt(pow(x - txb, 2) + pow(y - tyb, 2));
    if (dist <= maxDist) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
