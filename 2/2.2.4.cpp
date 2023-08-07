#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  // cout << N << endl;
  int a[50];
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < N; i++) {
    sum = sum + a[i];
  }
  cout << sum % 100 << endl;
}