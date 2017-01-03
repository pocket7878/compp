#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> memo;

int trib(int i) {
    
    if (i == 1) {
        return 0;
    } else if (i == 2) {
        return 0;
    } else if (i == 3) {
        return 1;
    } else {
        auto itr = memo.find(i - 1);
        int i1 = -1;
        if (itr != memo.end()) {
            i1 = itr->second;
        } else {
            i1 = trib(i - 1) % 10007;
            memo[i - 1] = i1;
        }
        itr = memo.find(i - 2);
        int i2 = -1;
        if (itr != memo.end()) {
            i2 = itr->second;
        } else {
            i2 = trib(i - 2) % 10007;
            memo[i - 2] = i2;
        }
        itr = memo.find(i - 3);
        int i3 = -1;
        if (itr != memo.end()) {
            i3 = itr->second;
        } else {
            i3 = trib(i - 3) % 10007;
            memo[i - 3] = i3;
        }
        auto res = (i1 + i2 + i3) % 10007;
        memo[i] = res;
        return res;
    }
}

int main() {
    int n;
    cin >> n;
    auto res = trib(n) % 10007;
    cout << res << endl;
}