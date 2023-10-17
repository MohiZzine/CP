#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int length[n];
  for (int k = 0; k < n; k++) {
    length[k] = 1;
    for (int j = 0; j <= k; j++) {
      if (array[i] < array[k]) {
        length[k] = max(length[k], length[i] + 1);
      }
    }
  }
  return 0;
}