#include <bits/stdc++.h>
using namespace std;

long long N, W;
vector<long long> w(109), v(109);
vector<long long> dp(109)(100009);

int main() {
  //入力
  cin >> N >> W;
  for (int i = 1; i <= N; i ++) cin >> w.at(i) >> v.at(i);

  //配列の初期化
  dp.at(0)(0) = 0;
  for(int i = 1; i <= W; i++) dp.at(0)(i) = -(1LL << 60);

  //動的計画法
  for (int i = 1; i <= N; i++) {
    for (int j = 0; j <= W; j++) {
      //j<w[i] の時、方法Bをとることができない
      if (j < w.at(i)) dp.at(i)(j) = dp.at(i - 1)(j);
      //j>=w[i]の時、方法A・方法Bのどちらも選ベル
      if (j >= w[i]) dp.at(i)(j) = max(dp.at(i - 1)(j), dp.at(i - 1)(j - w.at(i)) + v.at(i));
    }
  }
  //答えを出力
  long long Answer = 0;
  for (int i = 0; i <= W; i++) Answer = max(Answer, dp.at(N)(i));
  cout << Answer << endl;
  return 0;
}