#include <iostream>
#include <iomanip>
#include <queue>

using namespace std;

typedef struct {
    int x;
    int y;
} point_t;

int main() {
    int r, c;
    cin >> r >> c;
    int sy, sx, gy, gx;
    cin >> sy >> sx >> gy >> gx;
    sy--;
    sx--;
    gy--;
    gx--;
    int board[r][c];
    int score_map[r][c];
    for(int y = 0; y < r; y++) {
        for(int x = 0; x < c; x++) {
            char c;
            cin >> c;
            score_map[y][x] = -1;
            switch(c) {
                case '.':
                    board[y][x] = 0;
                    break;
                case '#':
                    board[y][x] = 1;
                    break;
            }
        }        
    }
    score_map[sy][sx] = 0;
    queue<point_t> qu;
    point_t start_pos = {sx, sy};
    qu.push(start_pos);
    while(!qu.empty()) {
        /*
        for(int y = 0; y < r; y++) {
            for(int x = 0; x < c; x++) {
                cout << setw(2) << score_map[y][x];
            }
            cout << endl;
        }
        */
        point_t head = qu.front();
        qu.pop();
        for(int dx = -1; dx <= 1; dx++) {
            for(int dy = -1; dy <= 1; dy++) {
                if (dx * dy != 0) continue;
                int xx = head.x + dx;
                int yy = head.y + dy;
                if (!(xx == 0 || xx == c || yy == 0 || yy == r) && board[yy][xx] == 0) {
                    if (score_map[yy][xx] == -1) {
                        score_map[yy][xx] = score_map[head.y][head.x] + 1;
                        point_t new_pos = {xx, yy};
                        qu.push(new_pos);
                    }
                }
            }
        }
    }
    cout << score_map[gy][gx] << endl;
    return 0;
}