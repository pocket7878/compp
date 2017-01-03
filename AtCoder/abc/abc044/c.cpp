#include <iostream>

using namespace std;

long long dp[51][51][2525];

#define rep(i,a,n) for(int i=a; i<n; i++)
#define repr(i,a,n) for(int i=a; i>=n; i--)

int main() {
  int n, a;
  cin >> n >> a;
  int card[51];
  rep(i, 0, n) cin >> card[i];
  rep(i, 0, 2501) {
    if(i == 0) dp[0][0][i] = 1;
    else dp[0][0][i] = 0;
  }
  rep(i, 1, n+1) {
    rep(j, 0, n+1) {
      rep(k,0,2525) {
        if (j == 0 || k < card[i-1]) dp[i][j][k] = dp[i-1][j][k];
        else dp[i][j][k] = dp[i-1][j-1][k-card[i-1]] + dp[i-1][j][k];
      }
    }
  }
  long long ans = 0;
  rep(i,1,n+1) {
    ans += dp[n][i][a * i];
  }
  cout << ans << endl;
  return 0;
}

