#include <bits/stdc++.h>
using namespace std;

bool isprime(long long N){
  //Nを2以上の整数とし、Nが素数であれば、true、素数でなければfalseを返す
  for(int i = 2; i * i <= N; i++) {
    if (N % i == 0) return false;
  }
  return true;
}

int main() {
  int N;
  cin >> N;
  bool answer = isprime(N);
  (answer == true) ? cout << "素数" << endl : cout << "素数ではない" << endl; //三項演算子
  return 0;
}