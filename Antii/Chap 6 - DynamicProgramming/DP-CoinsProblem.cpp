#include <bits/stdc++.h>

using namespace std;

int[] coins;

// Without memoization
int solve(int x) {
  if (x < 0) return INF;
  if (x == 0) return 0;
  int best = INF;
  for (auto c: coins) {
    best = min(best, solve(x - c) + 1);
  }
  return best;
}

// With memoization
int solve(int x) {
  if (x < 0) return INF;
  if (x == 0) return 0;
  if (ready[x]) return value[x];
  int best = INF;
  for (auto c: coins) {
    best = min(best, solve(x - c) + 1);
  }
  ready[x] = true;
  value[x] = best;
  return best;
}

int main() {

  // Iterative Implementation
  for (int x = 1; x <= n; x++) {
    value[x] = INF;
  }

  for (auto c:coins) {
    if (x - c >= 0) {
      value[x] = min(value[x], value[x - c] + 1); 
    }
  }
  return 0;
}