#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    string n;
    cin >> n;
    unordered_set<char> c;
    for(int i = 0; i < n.size(); i++) {
        c.insert(n[i]);
    }
    if (c.size() == 1) {
        cout << "SAME" << endl;
    } else {
        cout << "DIFFERENT" << endl;
    }
}