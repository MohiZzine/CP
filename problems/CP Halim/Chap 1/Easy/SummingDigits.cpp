#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  while(scanf("%d", &n), n) {
    int ans = 0;
    while (n) {
      ans += n % 10;
      n /= 10;
      if (n == 0) {
        if (ans >= 10) {
        n = ans;
        ans = 0; 
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}