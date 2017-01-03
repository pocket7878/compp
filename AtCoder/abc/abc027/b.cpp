#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int target = sum / n;
    if (sum % n != 0) {
        cout << "-1" << endl;
        return 0;
    }

    int count = 0;    
    for(int i = 1; i < n; i++) {
        int right = 0;
        int left = 0;
        for(int j = 0; j < i; j++) {
            left += a[j];
        }
        for(int j = i; j < n; j++) {
            right += a[j];
        }
        if (left != (target * i) || right != (target * (n - i))) {
            count++;
        }
    }
    cout << count << endl;
}