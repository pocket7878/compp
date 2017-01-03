#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int count[6];
    for(int i = 0; i < 6; i++) {
        count[i] = 0;
    }
    for(int i = 0; i < s.size(); i++) {
        count[s[i] - 'A']++;
    }
    for(int i = 0; i < 5; i++) {
        cout << count[i] << " ";
    }
    cout << count[5] << endl;
}