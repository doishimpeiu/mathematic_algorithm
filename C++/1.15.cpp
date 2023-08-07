#include <bits/stdc++.h>
using namespace std;

//関数定義
int my_min(int x, int y){
  if(x < y){
    return x;
  } else {
    return y;
  }
}

//返り値がない関数はvoidで宣言する
void out() {
  cout << "Hello" << endl;
  return;
}

int main() {
  out();
  int a ,b;
  cout << "aを入力してください" << endl;
  cin >> a;
  cout << "bを入力してください" << endl;
  cin >> b;
  int min = my_min(a, b);
  cout << min << endl;
}