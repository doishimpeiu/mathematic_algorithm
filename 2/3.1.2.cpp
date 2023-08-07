#include <bits/stdc++.h>
using namespace std;

int isprime(long long N){
  // vector<int> vec = (10);
  int ans = 1;
  //Nを2以上の整数とし、Nが素数であれば、true、素数でなければfalseを返す
  for(int i = 2; i * i <= N; i++) {
    if (N % i != 0) {
      // cout << "ここ" << endl;
      continue;
    cout << i << endl;
    ans = ans * i;
  }
  return ans;
}

int main() {
  int N;
  cin >> N;
  int answer = isprime(N);
  cout << answer << endl;
  return 0;
}