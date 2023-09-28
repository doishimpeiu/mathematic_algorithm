#include <bits/stdc++.h>
using namespace std;

long long GCD(long long A, long long B) {
  if (B == 0) {
    return A;
  } else {
    return GCD(B, A%B);
  }
}

int main() {
  long long A, B;
  cin >> A >> B;
  cout << GCD(A, B) << endl;
  return 0;
}