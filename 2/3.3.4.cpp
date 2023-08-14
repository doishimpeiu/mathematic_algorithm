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
  int N;
  cout << "Nの入力" << endl;
  cin >> N;
  vector<int> vec(N);
  cout << "色を1〜3で入力" << endl;
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  int a, b, c;
  for (int i = 0; i < N; i++) {
    if (vec.at(i) == 1) {
      a++;
    } else if (vec.at(i) == 2) {
      b++;
    } else if (vec.at(i) == 3) {
      c++;
    }
  }
  // cout << a * d + b * c  << "通り" << endl;
  int x, y, z, ans;
  x = kumiawase(a, 2);
  y = kumiawase(b, 2);
  z = kumiawase(c, 2);
  ans = x + y + z;
  cout << ans << endl;
}