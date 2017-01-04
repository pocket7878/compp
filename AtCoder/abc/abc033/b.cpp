#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> ss;
    int ps[n];
    int count = 0;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s >> ps[i];
        ss.push_back(s);
        count += ps[i];
    }
    double th = (double)count / 2;
    string town_name = "atcoder";
    for(int i = 0; i < n; i++) {
        if (ps[i] > th) {
            town_name = ss[i];
            break;
        } 
    }
    cout << town_name << endl;
}