#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  while(scanf("%d %d", &a, &b)) {
    int n;
    if (a == -1 && b == -1) break;

    if (a < b) {
      int r = b - a;
      a += 100;
      n = a - b > r ? r: a - b;
    } 
    else if (a > b) {
      int r  = a - b;
      a -= 100;
      n = b - a > r ? r: b - a;
    } else {
      n = 0;
    }
    printf("%d\n", n);
  }
  return 0;
}