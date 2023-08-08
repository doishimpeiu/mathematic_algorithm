#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A;
  cin >> N >> A;
 
  // ここにプログラムを追記
  string op;
  int B;
  for (int i = 1; i <= N; i++) {
    cin >> op >> B;
    if (op == "+") {
      A = A + B;
    } else if (op == "-") {
      A = A - B;
    } else if (op == "*") {
      A = A * B;
    } else if (op == "/" && B != 0) {
      A = A / B;
    } else {
      cout << "error" << endl;
      break;
    }
    cout << i << ":" << A << endl;
  }
}