#include <iostream>

using namespace std;

int main() {
  unsigned long n;
  unsigned long q;
  cin >> n >> q;
  bool n[l];
  for(unsigned long i = 0; i < q; i++) {
    unsigned long l;
    unsigned long r;
    cin >> l >> r;
    for(unsigned long j = l; j <= r; j++) {
      n[j] = !n[j];
    }
  }
  return 0;
}
