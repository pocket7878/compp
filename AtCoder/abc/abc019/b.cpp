#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    char current_char = s[0];
    int max_idx = 0;
    int count = 0;
    while (max_idx < s.size()) {
        char c = s[max_idx];
        if (c == current_char) {
            count++;
            max_idx++;
        } else {
            cout << current_char << count;
            current_char = c;
            count = 0;
        }
    }
    cout << current_char << count << endl;
}