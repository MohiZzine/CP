#include <bits/stdc++.h>

using namespace std;

int main() {
  int B, N;
  while(scanf("%d %d", &B, &N), (B | N)) {
    bool ans = true;
    int reserves[B], k = B; 
    while(B--) {
      cin >> reserves[k - B - 1];
    }
    while(N--) {
      int D, C, V; cin >> D >> C >> V;
      reserves[D - 1] -= V; reserves[C - 1] += V;
    }

    for (int i = 0; i < k; i++) {
      if (reserves[i] < 0) {
      ans = false;
      break;
      }
    }
    if (ans) printf("S\n");
    else printf("N\n");
  }
  return 0;
}