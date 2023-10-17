#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  int sum[N][N];

  for (int y = 1; y <= N; y++) {
    for (int x = 1; x <= N; x++) {
      sum[y][x] = max(sum[y - 1][x], sum[y][x - 1]) + value[y][x];
    }
  }

  return 0;
}