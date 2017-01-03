#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    char first = s[(n - 1) / 5];
    char second = s[(n - 1) % 5];
    cout << first << second << endl;
}