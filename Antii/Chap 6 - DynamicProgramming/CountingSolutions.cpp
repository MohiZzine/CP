#include <bits/stdc++.h>

using namespace std;


int main() {
  int count[];
  // Sometimes the result is so large that the answer is asked modulo some large m
  long long m = 10e9 + 7;
  count[0] =  1;
  for (int x = 1; x <= n; x++) {
    for (auto c:coins) {
      if (x - c >= 0)
      count[x] += count[x - c];
      count[x] %= m;
    }
  }
  
  return 0;
}