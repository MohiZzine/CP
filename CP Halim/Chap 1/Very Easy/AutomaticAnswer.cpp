#include <bits/stdc++.h>

using namespace std;

int main() {
  int TC;
  cin >> TC;
  while(TC--) {
    int n;
    scanf("%d", &n);
    long long ans = n;
    ans *= 567;
    ans /= 9;
    ans += 7492;
    ans *= 235;
    ans /= 47;
    ans -= 498;
    ans = ans > 0 ? ans: -ans;
    printf("%d\n", (ans / 10) % 10);
  }
  return 0;
}