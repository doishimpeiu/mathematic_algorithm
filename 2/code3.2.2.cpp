#include <bits/stdc++.h>
using namespace std;

//GCDはGreatest Common Divisor(最大公約数)
long long GCD(long long A, long long B) {
  while(A >=1 && B >=1) {
    if (A < B) {
      B = B % A; //A < Bの時, BをAで割ったあまりを書き換える
    } else {
      A = A % B;  //A > Bの時, AをBで割ったあまりを書き換える
    }  
  }
  if (A >= 1) return A;
  return B;
}

int main() {
  long long A, B;
  cout << "AとBを入力してください" << endl;
  cin >> A >> B;
  long long answer = GCD(A, B);
  cout << answer << endl;
  return 0;
}