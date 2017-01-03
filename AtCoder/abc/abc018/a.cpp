#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int a_rank, b_rank, c_rank;
    a_rank = b_rank = c_rank = 0;
    if (b > a)
        a_rank++;
    if (c > a)
        a_rank++;
    cout << a_rank + 1 << endl;
    if (a > b)
        b_rank++;
    if (c > b)
        b_rank++;
    cout << b_rank + 1 << endl;
    if (a > c)
        c_rank++;
    if (b > c)
        c_rank++;
    cout << c_rank + 1 << endl;
}