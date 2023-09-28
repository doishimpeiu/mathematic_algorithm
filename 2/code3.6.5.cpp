//分割統治法による区間の合計値の計算
#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> A(109);

int solve(int l, int r) {
  if (r - l == 1) return A.at(l);
  int m = (l + r) / 2;  //区間[l, r)の中央で分割する
  int s1 = solve(l, m);  //s1はA[l] +...+ A[m-1]の合計値となる
  int s2 = solve(m, r);  //s2はA[m] +...+ A[r-1]の合計値となる
  return s1 + s2;
}

int main() {
  //入力
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> A.at(i);
  }

  //再帰呼び出し→答えの出力
  int Answer = solve(1, N + 1);
  cout << Answer << endl;
  return 0;
}