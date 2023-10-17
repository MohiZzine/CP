#include <iostream>

using namespace std;

int solve(int m, int n) {
  return ((m) / 3) * (n / 3);
}
int main() {
  int m, n, t;
  scanf("%d", &t);
  while(t--) {
    scanf("%d %d", &m, &n);
    printf("%d\n", solve(m, n));
  }
  return 0;
}