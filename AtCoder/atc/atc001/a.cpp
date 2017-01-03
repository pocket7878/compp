#include <iostream>
#include <stack>

using namespace std;

typedef struct {
	int x;
	int y;
} point_t;

int main() {
	int h, w;
	cin >> h >> w;
	int map[h][w];
	point_t start;
	point_t goal;
	for(int y = 0; y < h; y++) {
		for(int x = 0; x < w; x++) {
			char c;
			cin >> c;
			switch(c) {
				case 's':
					start.x = x;
					start.y = y;
					map[y][x] = 0;
					break;
				case 'g':
					goal.x = x;
					goal.y = y;
					map[y][x] = 0;
					break;
				case '.':
					map[y][x] = 0;
					break;
				case '#':
					map[y][x] = 1;
					break;
			}
		}
	}
	//DFS
	stack<point_t> q;
	map[start.x][start.y] = 1;
	q.push(start);
	while (!q.empty()) {
		point_t v = q.top();
		q.pop();
		if (v.x == goal.x && v.y == goal.y) {
			cout << "Yes" << endl;
			return 0;
		}
		for(int dx = -1; dx <= 1; dx++) {
			for(int dy = -1; dy <= 1; dy++) {
				if (dx * dy == 0) {
					int xx = v.x + dx;
					int yy = v.y + dy;
					if (0 <= xx && xx < w && 0 <= yy && yy < h && map[yy][xx] == 0) {
						map[yy][xx] = 1;
						point_t i;
						i.x = xx;
						i.y = yy;
						q.push(i);
					}
				}
			}
		}
	}
	cout << "No" << endl;
	return 0;
}