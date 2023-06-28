#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
  int x;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      int cell; cin >> cell;
      if (cell == 1) {
        int I = abs(i - 2), J = abs(j - 2);
        x = I + J;
      }
    }
  }
  cout << x;
  return 0;
}