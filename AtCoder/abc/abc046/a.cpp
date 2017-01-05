#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    unordered_set<int> px;
    px.insert(a);
    px.insert(b);
    px.insert(c);
    cout << px.size() << endl;
}