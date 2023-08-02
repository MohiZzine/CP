#include <bits/stdc++.h>

using namespace std;

int main() {
  int N; cin >> N;
  int count = 0;
  while(N--) {
    int a, b, c; cin >> a >> b >> c;
    if (a + b + c >= 2) count++;
  }
  printf("%d", count);
  return 0;
}