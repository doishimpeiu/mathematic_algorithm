#include <bits/stdc++.h>
using namespace std;

int N, S;
vector<int> A(69);
// vector<vector<bool>> vv(n, vector<Type>(m));
vector<vector<bool>> dp(69, vector<bool>(10009));

int main() {
  //入力
  cin >> N >> S;
  for (int i = 1; i <= N; i++) cin >> A.at(i);

  //配列の初期化
  dp.at(0)(0) = true;
  for (int i = 1; i <= S; i++) dp.at(0)(i) = false;

  //動的計画法
  for (int i = 1; i <= N; i++) {
    for (int j = 0; j <= S; j++) {
      //j < A[i] の時、カードiは選べない
      if (j < A.at(i)) dp.at(i)(j) = dp.at(i - 1)(j);
      //j >= A[i]の時、選ぶor選ばない両方の選択肢がある
      if (j >= A.at(i)) {
        if (dp.at(i - 1)(j) == true || dp.at(i - 1)(j - A.at(i)) == true) dp.at(i)(j) = true;
        else dp.at(i)(j) = false;
      }
    }
  }

  //答えを出力
  if (dp.at(N)(S) == true) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}