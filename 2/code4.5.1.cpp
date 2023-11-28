#include <bits/stdc++.h>
using namespace std;

int N, M, A[100009], B[100009];
vector<int> G[100009];  //G[i]は頂点iに隣接する頂点のリスト

int main() {
  //入力
  cin >> N >> M;
  for (int i = 1; i <= M; i++) {
    cout << "i:" << i << endl;
    cin >> A[i] >> B[i];
    G[A[i]].push_back(B[i]);  //頂点A[i]に隣接する頂点としてB[i]を追加
    G[B[i]].push_back(A[i]);  //頂点A[i]に隣接する頂点としてB[i]を追加
  }

  //出力(G[i].size()は頂点iに隣接する頂点のリストの大きさ = 次数)
  for (int i = 1; i <= N; i++) {
    cout << i <<  ":{";
    for (int j = 0; j < (int)G[i].size(); j++) {
      if (j >= 1) cout << ",";  //コンマ区切りで出力する
      cout << G[i][j];  //G[i][j]は頂点iに隣接する頂点のうちj番目のもの
    }
    cout << "}" << endl;
  }
  return 0;
}