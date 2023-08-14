//5枚のカードを全探索するプログラム

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  vector<int> A(109);
  int Answer = 0;

  //入力
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> A.at(i);

  //5つのカードの番号(i, j, k, l, m)を全探索
  for (int i = 1; i <= N; i++) {
    for (int j  = i + 1; j <= N; j++) {
      for (int k = j + 1; k <= N; k++){
        for (int l = k + 1; l <= N; l++){
          for (int m = l + 1; m <= N; m++) {
            if (A.at(i) + A.at(j) + A.at(k) + A.at(l) + A.at(m) == 1000) Answer++;
          }
        }
      }
    }
  }
  return 0;
}