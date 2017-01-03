#include <iostream>

using namespace std;

string dis_name[16] = {
	"N",
	"NNE",
	"NE",
	"ENE",
	"E",
	"ESE",
	"SE",
	"SSE",
	"S",
	"SSW",
	"SW",
	"WSW",
	"W",
	"WNW",
	"NW",
	"NNW"
};

int main() {
	int deg;
	int dis;
	cin >> deg >> dis;
	int dis_idx = ((dis * 10  + 1125) / 2250) % 16;
	string dis_idx_name = dis_name[dis_idx];
}
