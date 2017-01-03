#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n, acc;
  cin >> n;
  acc = 0;
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    while(!(a % 2 == 1 && (a % 3 == 1 || a % 3 == 0))) {
      acc++;
      a--;
    }
  }
  cout << acc << endl;
}
