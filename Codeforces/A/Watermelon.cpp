#include <bits/stdc++.h>

using namespace std;

int main() {
  int w; cin >> w;
  bool possible = true;
  if (w == 2) {
    possible = false;
  }
  else if (w % 2 == 1) {
    possible = false;
  }

  if (possible) printf("YES\n");
  else printf("NO\n");
  return 0;
}