#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int w, h, n;
    cin >> w >> h >> n;
    int c[h][w];
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            c[i][j] = 1;
        }
    }
    for(int i = 0; i < n; i++) {
        int x, y, a;
        cin >> x >> y >> a;
        switch(a) {
            case 1:
                for(int j = 0; j < x; j++) {
                    for(int i = 0; i < h; i++) {
                        c[i][j] = 0;
                    }
                }
                break;
            case 2:
                for(int j = x; j < w; j++) {
                    for(int i = 0; i < h; i++) {
                        c[i][j] = 0;
                    }
                }
                break;
            case 3:
                for(int i = 0; i < y; i++) {
                    for(int j = 0; j < w; j++) {
                        c[i][j] = 0;
                    }
                }
                break;
            case 4:
                for(int i = y; i < h; i++) {
                    for(int j = 0; j < w; j++) {
                        c[i][j] = 0;
                    }
                }
                break;
        }
    }
    int res = 0;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            res += c[i][j];
        }
    }
    cout << res << endl;
}