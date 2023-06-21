#include <bits/stdc++.h>

using namespace std;

int main() {
  int TC, i = 1;
  scanf("%d", &TC);
  while(TC--) {
    int a, b, c, res;
    cin >> a >> b >> c;
    if (a > b && b > c) res = b;
    else if (c > b && b > a) res = b;
    else if (b > a && a > c) res = a;
    else if (c > a && a > b) res = a;
    else if (a > c && c > b) res = c;
    else res = c;
    printf("Case %d: %d\n", i++, res);
  }
  return 0;
}