#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int updist, downdist;
	if (a > b) {
		updist = (b + 10) - a;
		downdist = a - b;
	} else {
		updist = b - a;
		downdist = (a + 10) - b;
	}
	if (updist > downdist)
		cout << downdist << endl;
	else
		cout << updist << endl;
}