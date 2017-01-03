#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ll r, b, x, y;
    cin >> r >> b >> x >> y;
    
    ll yes = 0; no = min(r,b)+1;
    while(no - yes > 1) {
        ll k = (yes + no) / 2;
        if((r - k)/(x - 1) + (b-k)/(y-1) >= k) yes = k;
        else no = k;
    }
    
    cout << yes << endl;
    return 0;
}
