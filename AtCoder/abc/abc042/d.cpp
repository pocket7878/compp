#include <iostream>
#include <map>
#include <tuple>

using namespace std;

typedef long long ll;

map<tuple<int, int>, ll> cache;
int h, w;
int a, b;

ll solve(int x, int y) {
  cout << "Solve[" << x << "][" << y << "]" << endl;
  if (x < 0 || y < 0 || x >= w || y >= h) {
    cout << "Out range 0" << endl;
    //範囲外
    return 0;
  } else if (x < a && y >= (h - b)){ 
    cout << "Cant go this area 0" << endl;
    return 0;
  } else {
    cout << "In Range" << endl;
    auto search = cache.find(make_tuple(x, y));
    if (search != cache.end()) {
      ll c = cache[make_tuple(x, y)];
      cout << "Cache found: " << c << endl;
      return c;
    } else {
      ll top = solve(x, y - 1);
      ll left = solve(x - 1, y);
      cout << "top: " << top << endl;
      cout << "left: " << left << endl;
      cache[make_tuple(x, y)] = top + left;
      return top + left;
    }
  }
}

int main() {
  cin >> h >> w;
  cin >> a >> b;
  for(int i = 0; i < h; i++) {
    cache[make_tuple(0, h)] = 1;
  }
  for(int i = 0; i < w; i++) {
    cache[make_tuple(i, 0)] = 1;
  }
  ll result = solve(w - 1, h - 1);
  cout << (result % 1000000007) << endl;
}
