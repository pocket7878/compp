#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int rcount = 0;
  int bcount = 0;
  for(int i = 0; i < n; i++) {
    string c;
    cin >> c;
    if(c == "R")
      rcount++;
    if(c == "B")
      bcount++;
  }
  if(rcount > bcount)
    cout << "TAKAHASHI" << endl;
  else if(bcount > rcount) 
    cout << "AOKI" << endl;
  else
    cout << "DRAW" << endl;
}
