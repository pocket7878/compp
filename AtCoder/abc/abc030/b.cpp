#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    n %= 12;
    double rn = 2 * M_PI / 12 * n + 2 * M_PI / 12 / 60 * m; 
    double rm = 2 * M_PI / 60 * m;
    
    double between = fabs(rm - rn);
    double roll = 0.0;
    if (rm > rn) {
        roll = rn + (2 * M_PI - rm);
    } else if(rm < rn) {
        roll = rm + (2 * M_PI - rn);
    }
    double res = 0.0;
    if (roll <= between) {
        res = roll;
    } else {    
        res = between;
    }
    cout << fixed << setprecision(4) << res * 180.0 / M_PI << endl;
}