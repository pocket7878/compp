#include <cstdio>
#include <iostream>
#include <string>
#include <locale>
#include <cctype>

using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (i == 0) 
      putchar(toupper(s[i]));
    else
      putchar(tolower(s[i]));
  }
  cout << endl;
  return 0;
}
