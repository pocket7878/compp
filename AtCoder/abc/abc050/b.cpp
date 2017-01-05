#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int t[n];
    for(int i = 0; i < n; i++) {
        cin >> t[i];
    }
    int m;
    cin >> m;
    int p[m];
    int x[m];
    for(int i = 0; i < m; i++) {
        cin >> p[i] >> x[i];
    }
    
    for(int i = 0; i < m; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            if (j == p[i] - 1) {
                sum += x[i];
            } else {
                sum += t[j];
            }
        }
        cout << sum << endl;
    }
}