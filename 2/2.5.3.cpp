#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 5;
  int cnt = 1;
  while(N >= 1) {
    cnt = cnt * N;
    N--;
  }
  cout << cnt << endl;
}