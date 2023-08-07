#include <bits/stdc++.h>
using namespace std;

int main() {
  int a = 10, b = 5;

  int answer = min(a, b);

  cout << answer << endl;

  //配列の定義
  vector<int> vec = {1, 4, 10};
  reverse(vec.begin(), vec.end());

  cout << "reverse関数" << endl;
  for (int i = 0; i < vec.size(); i++){
    cout << vec.at(i) << endl;
  }

  cout << "sort関数" << endl;
  sort(vec.begin(), vec.end());
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << endl;
  }
}