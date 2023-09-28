#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> dp(54);

int main() {
  //入力
  cin >> N;

  //動的計画法　→　答えの出力
  for (int i = 0; i <= N; i++) {
    if (i <= 1) dp.at(i) = 1;
    else dp.at(i) = dp.at(i - 1) + dp.at(i - 2);
  }
  cout << dp.at(N) << endl;
  return 0;
}