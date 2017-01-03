#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<vector<int> > Matrix;

const int INF = 100000000;

int main(){
  int n, m;
  cin >> n >> m;
  Matrix d;
  d = Matrix(n, vector<int>(n, INF));
  for(int i = 0; i < n; i++) {
    d[i][i] = 0;
  }
  for(int i = 0; i < m; i++) {
    int a, b, t;
    cin >> a >> b >> t;
    d[a-1][b-1] = d[b-1][a-1] = t;
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      for(int k = 0; k < n; k++) {
        d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
      }
    }
  }
  int minCost = INF;
  for(int i = 0; i < n; i++) {
    int maxCost = -1;
    for(int j = 0; j < n; j++) {
      if(d[i][j] > maxCost)
        maxCost = d[i][j];
    }
    if(maxCost < minCost) {
      minCost = maxCost;
    }
  }
  cout << minCost << endl;
}
