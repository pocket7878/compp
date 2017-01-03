#include <iostream>

using namespace std;

typedef long long ll;

int main() {
  int n, ng1, ng2, ng3;
  cin >> n >> ng1 >> ng2 >> ng3;
  ll dp[n + 1];
  for(int i = 0; i < n; i++) {
    dp[i] = 1000000000000000;
  }
  dp[n] = 0;
  for (int i = n; i >= 0; i--) {
    if (i == ng1 || i == ng2 || i == ng3) 
      continue;
    for(int j = 1; j <= 3; j++) {
      dp[i - j] = min(dp[i] + 1, dp[i - j]);
    }
  }
  cout << dp[0] << endl;
  if (dp[0] <= 100) 
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
