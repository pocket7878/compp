#include <iostream>
#include <locale>

using namespace std;

int main() {
  char largeC, smallC;
  cin >> largeC >> smallC;
  if (tolower(largeC) == smallC)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
