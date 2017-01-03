#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_set<int> flowers;
    int count = 0;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (flowers.find(a) != flowers.end()) {
            count++;
        } else {
            flowers.insert(a);
        }
    }
    cout << count << endl;
}