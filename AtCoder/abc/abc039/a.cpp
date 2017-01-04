#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int area = a * b + a * c + b * c;
    area *= 2;
    cout << area << endl;
}