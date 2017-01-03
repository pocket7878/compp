#include <iostream>

using namespace std;

typedef long long ll;

int main() {
	ll r, c;
	ll x, y;
	ll d, l;
	cin >> r >> c >> x >> y >> d >> l;
	ll available_space_count = (r - x + 1) * (c - y + 1);
	ll space_size = x * y;
	ll larger;
	if (d > l) {
		larger = d;
	} else {
		larger = l;
	}
	//Calculate space_size C larger
        ll pascal_triangle[space_size + 1][larger + 1];
        pascal_triangle[0][0] = 1;
        for(ll n = 0; n <= space_size; n++) {
          for(ll r = 0; r <= larger; r++) {
          }
        }
	return 0;
}
