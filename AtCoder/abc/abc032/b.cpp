#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;
    unordered_set<string> subst;
    
    if (s.size() < k) {
        cout << 0 << endl;
        return 0;
    }
    
    for(int i = 0; i <= s.size() - k; i++) {
        subst.insert(s.substr(i, k));
    }
    
    cout << subst.size() << endl;
    return 0;
}