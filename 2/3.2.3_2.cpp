#include <bits/stdc++.h>
using namespace std;

long long GCD(long long A, long long B) {
  while(A >= 1 && B >= 1) {
    if (A >= B) {
      A = A % B;
    } else {
      B = B % A;
    }
  } if (A >= B) {
    return A;
  } else {
    return B;
  }
}

//LCM(Least Common Multiple)最小公倍数
long long LCM(long long A, long long B) {
  long long L;
  L = A * B / GCD(A, B);
  return L;
}

int main() {
  long long N, answer;
  cout << "整数Nを入力してください" << endl;
  cin >> N;
  vector<long long> vec(N);
  for (int i = 0; i < N; i++) {
    cout << "正の整数を入力してください" << endl;
    cin >> vec.at(i);
  }
  for (int i = 0; i < N - 1; i++) {
    if (i == 0) {
      // G = GCD(vec.at(i), vec.at(i + 1));
      answer = LCM(vec.at(i), vec.at(i + 1));
    } else {
      // G = GCD(L, vec.at(i + 1));
      answer = LCM(answer, vec.at(i + 1));
    }
  } 
  cout << "全ての数の最小公倍数は" << answer << "です。" << endl;
  return 0;
}