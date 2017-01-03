#include <iostream>
#include <map>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
  ll h, w, n;
  cin >> h >> w >> n;
  vector<pair<ll, ll>> table;
  for(ll i = 0; i < n; i++) {
    ll x, y;
    cin >> x >> y;
    if (x - 1 > 0 && x + 1 <= w && y - 1 > 0 && y + 1 <= h) {
      table.push(pair<ll, ll>(x - 1, y - 1));
      table.push(pair<ll, ll>(x, y - 1));
    }
  }
}
