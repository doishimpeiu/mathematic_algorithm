#include <bits/stdc++.h>
using namespace std;

int kaijou(int n) {
  int x = 1;
  while(n > 0) {
    x *= n;
    n--;
  }
  return x;
}

int kumiawase(int n, int r) {
  int ans;
  ans = kaijou(n) / (kaijou(r) * kaijou(n - r));
  return ans;
}

int main() {
  int n, r, ans;
  cin >> n >> r;
  ans = kumiawase(n,r);
  cout << ans << endl;
  return 0;
}