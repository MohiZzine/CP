#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m; // n = size of array of weights, m = total sum of weights
  int w[n]; // array of weights

  // First implementation
  possible[0][0] = true;
  for (int x = 0; x <= m; x++) {
    for (int k = 1; k <= n; k++) {
      if (x == 0) {
        possible[x][k] = false;
        break;
      }
      if (x - w[k] >= 0) possible[x][k] = possible[x - w[k]][k];
      else possible[x][k] |= possible[x][k - 1];
    }
  }

  // Faster, updating the array from left to right
  // possible is now one-dimensional
  possible[0] = true;
  for (int k = 1; k <= n; k++) {
    for (int x = m - w[k]; x>= 0; x--) {
      possible[x + w[k]] |= possible[x];
    }
  }
  return 0;
}