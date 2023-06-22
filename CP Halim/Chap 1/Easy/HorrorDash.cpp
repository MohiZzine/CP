#include <bits/stdc++.h>

using namespace std;

int main() {
  int TC, k = 1; cin >> TC;
  while(TC--) {
    int N; cin >> N;
    int m; m = 0;
    while(N--) {
      int spd; cin >> spd;
      m = spd > m ? spd: m;
    }
    printf("Case %d: %d\n", k++, m);
  }
  return 0;
}