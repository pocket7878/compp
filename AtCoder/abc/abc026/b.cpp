#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> rs;
    
    for(int i = 0; i < n; i++) {
        int r;
        cin >> r;
        rs.push_back(r);
    }
    
    sort(rs.begin(), rs.end(), greater<int>());
    int op = 1;
    int r = 0;
    for(auto iter = rs.begin(); iter != rs.end(); iter++) {
        r += ((*iter) * (*iter) * op);
        op *= -1;
    }
    double result = r * 3.14159265359;
    cout << fixed << setprecision(6) << result << endl;
}