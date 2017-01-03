#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> mp;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    mp.insert(make_pair(a[i], -1));
  }
  int idx = 0;
  for(auto iter = mp.begin(); iter != mp.end(); iter++) {
    iter->second = idx++;
  }
  for(int i = 0; i < n; i++) {
    cout << mp[a[i]] << endl;
  }
}
