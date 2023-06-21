#include <bits/stdc++.h>

using namespace std;

int main() {
  int K;
  while(scanf("%d", &K), K) {
    int m, n;
    cin >> m >> n;
    int x, y;
    while(K--) {
      cin >> x >> y;
      if (x == m || y == n) printf("divisa\n");
      else if (x > m && y > n) printf("NE\n");
      else if (x > m && y < n) printf("SE\n");
      else if (x < m && y > n) printf("NO\n");
      else printf("SO\n");
    }
  }
  return 0;
}