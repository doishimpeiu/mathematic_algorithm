#include <bits/stdc++.h>
using namespace std;

int N;
vector<bool> prime(100000009);

int main() {
  //入力→配列の初期化
  cin >> N;
  for (int i = 2; i <= N; i++) prime.at(i) = true;

  //エラトステネスのふるい
  for (int i = 2; i * i <= N; i++) {
    if(prime.at(i) == true) {
      for(int x = 2 * i; x <= N; x += i) prime.at(x) = false;
    }
  }

  //N以下の素数を小さい順に出力
  for (int i = 2; i <= N; i++) {
    if(prime.at(i) == true) cout << i << endl;
  }
  return 0;
}