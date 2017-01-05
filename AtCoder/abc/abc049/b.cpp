#include <iostream>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    char cx[h][w];
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> cx[i][j];
        }
    }
    for(int i = 1; i <= h * 2; i++) {
        for(int j = 1; j <= w; j++) {
            cout << cx[(i + 1) / 2 - 1][j - 1];
        }
        cout << endl;
    }
}