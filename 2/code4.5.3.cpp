#include <bits/stdc++.h>
using namespace std;

int N, M, A[100009], B[100009];
int dist[100009];
vector<int> G[100009];

int main() {
  //入力
  cin >> N >> M;
  for (int i = 1; i <= M; i++) {
    cout << "i:" << i << endl;
    cin >> A[i] >> B[i];
    G[A[i]].push_back(B[i]);
    G[B[i]].push_back(A[i]);
  }

  //幅優先探索の初期化 (dist[i]=-1の時, 未到達の白色頂点である)
  for(int i = 1; i <= N; i++) dist[i] = -1;
  queue<int> Q;  //キューQを定義する
  Q.push(1); dist[1] = 0;  //Qに1を追加(操作1)

  //幅優先探索
  while (!Q.empty()) {
    int pos = Q.front();  //Qの先頭を調べる(操作2)
    Q.pop();  //Qの先頭を取り出す(操作3)
    for (int i = 0; i < (int)G[pos].size(); i++) {
      int nex = G[pos][i];
      if (dist[nex] == -1) {
        dist[nex] = dist[pos] + 1;
        Q.push(nex);  //Qにnexを追加(操作1)
      }
    }
  }

  //頂点1から各頂点までの最短距離を出力
  cout << "頂点1から各頂点までの最短距離を出力" << endl;
  for (int i = 1; i <= N; i++) {
    cout << "i:" << i << endl;
    cout << dist[i] << endl;
  }
  return 0;
}