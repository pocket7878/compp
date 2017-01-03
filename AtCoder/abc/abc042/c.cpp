#include <iostream>
#include <cstdlib>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

vector<int> solve(vector<int> digits, int idx, set<int> enables) {
  int d = digits[idx];
  if (idx == (digits.size() - 1)) {
    //最後の桁
    auto search = enables.lower_bound(d);
    vector<int> result;
    //最後の桁の場合はその数と同じかそれより大きい最小の数を探す
    //見つからなければ探索失敗
    if (search != enables.end()) {
      result.push_back(*search);
    }
    return result;
  } else {
    //ソレ以外の場合は現在の桁と同じかソレ以上の数を探してみる
    auto search = enables.lower_bound(d);
    vector<int> result;
    if (search != enables.end()) {
      //みつかった
      int res = *search;
      if (res == d) {
        //見つかった数が現在の桁と同じ場合
        //残りの桁についてまた最小の数を探しに行く
        vector<int> rest = solve(digits, idx + 1, enables);
        if (rest.empty()) {
          //残りの桁を構築失敗したら探索失敗
          return result;
        } else {
          //残りのけたが構築成功したらそれに今の桁の値をつなげて返す
          result.push_back(res);
          for(auto iter = rest.begin(); iter != rest.end(); iter++) {
            result.push_back(*iter);
          }
          return result;
        }
      } else {
        //見つかった数が今の桁より大きい
        //残りの桁は最小の数でうめれば最小になる
        result.push_back(res);
        search = enables.lower_bound(-1);
        res = *search;
        for(int i = idx + 1; i < digits.size(); i++) {
          result.push_back(res);
        }
        return result;
      }
    } else {
      //見つからなかったら探索失敗
      return result;
    }
  }
}

int main() {
  int n;
  int k;
  cin >> n >> k;
  vector<int> digits;
  string s = to_string(n);
  for(int i = 0; i < s.length(); i++) {
    digits.push_back(s[i] - '0');
  }
  set<int> enables;
  enables.insert(0);
  enables.insert(1);
  enables.insert(2);
  enables.insert(3);
  enables.insert(4);
  enables.insert(5);
  enables.insert(6);
  enables.insert(7);
  enables.insert(8);
  enables.insert(9);
  for(int i = 0; i < k; i++) {
    int idx;
    cin >> idx;
    enables.erase(idx);
  }
  vector<int> result = solve(digits, 0, enables);
  for(auto iter = result.begin(); iter != result.end(); iter++) {
    cout << *iter;
  }
  cout << endl;
}
