#include <bits/stdc++.h>
using namespace std;

// int N, H[100009], dp[100009];
int N;
vector<int> H(100009);
vector<int> dp(100009);

int main() {
  //入力
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> H.at(i);
  }
  //動的計画法　→　答えの出力
  for (int i = 1; i <= N; i++) {
    if (i == 1) dp.at(i) = 0;
    if (i == 2) dp.at(i) = abs(H.at(i - 1) - H.at(i));
    if (i >= 3) {
      int v1 = dp.at(i - 1) + abs(H.at(i - 1) - H.at(i));
      int v2 = dp.at(i - 2) + abs(H.at(i - 2) - H.at(i));
      dp.at(i) = min(v1, v2);
    }
  }
  cout << dp.at(N) << endl;
  return 0;
}