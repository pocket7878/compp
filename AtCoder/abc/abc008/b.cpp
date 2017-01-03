#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	int n;
	map<string, int> count_map;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (count_map.find(s) != count_map.end()) {
			count_map[s] = count_map[s] + 1;
		} else {
			count_map[s] = 1;
		}
	}
	map<string, int>::iterator it;
	int maxValue = -1;
	string maxKey = "";
	for(it = count_map.begin(); it != count_map.end(); it++) {
		if (maxValue < it->second) {
			maxValue = it->second;
			maxKey = it->first;
		}
	}
	cout << maxKey << endl;
}