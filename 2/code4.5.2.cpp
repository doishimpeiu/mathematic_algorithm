#include <bits/stdc++.h>
using namespace std;

int N, M, A[100009], B[100009];
vector<int> G[100009];
bool visited[100009];  //visited[pos]=falseの時, 頂点xが白色・trueの時灰色

void dfs(int pos) {
  visited[pos] = true;
  //for(inti : G[pos])のような書き方を「範囲for文」という
  for (int i : G[pos]) {
    if (visited[i] == false) dfs(i);
  }
}

int main() {
  //入力
  cin >> N >> M;
  for (int i = 1; i <= M; i++) {
    cout << "i:" << i << endl;
    cin >> A[i] >> B[i];
    G[A[i]].push_back(B[i]);
    G[B[i]].push_back(A[i]);
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

  //深さ優先探索
  dfs(1);
  
  //連結かどうかの判定(Answer = trueの時連結)
  bool Answer = true;
  for (int i = 1; i <= N; i++) {
    if (visited[i] == false) Answer = false;
  }
  if (Answer == true) cout << "The graph is connected." << endl;
  else cout << "The graph is not connected" << endl;
  return 0;
}