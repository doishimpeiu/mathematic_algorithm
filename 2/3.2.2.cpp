#include <bits/stdc++.h>
using namespace std;

long long GCD(long long A, long long B) {
  while(A >= 1 && B >= 1) {
    if(A >= B) {
      A = A % B;
    } else {
      B = B % A;
    }
  } if (A >= 1) {
    return A;
  } else {
    return B;
  }
}

int main() {
  long long N;
  cout << "Nを入力" << endl;
  cin >> N;
  long long answer;
  vector<long long> vec(N);
  for (int i = 0; i < N; i++) {
    cout << "正の整数を入力してください" << endl;
    cin >> vec.at(i);
  } 
  for (int i = 0; i < N -1; i++) {
    if (i == 0) {
      answer = GCD(vec.at(i), vec.at(i + 1));
    } else {
      answer = GCD(answer, vec.at(i + 1));
    }
  }
  cout << answer << endl;
  return 0;
}