#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
  int N, B, H, W;
  while(cin >> N >> B >> H >> W) {
    int ans = 0;
    for (int i = 0; i < H; i++) {
      int price; cin >> price;
      for (int j = 0; j < W; j++) {
        int avail; cin >> avail;
        if (avail > N && N * price < B) {
          ans = (ans == 0) ? N * price: min(ans, N * price);
        }
      }
    }
    if (ans == 0) printf("stay home\n");
    else printf("%d\n", ans);
  }
  return 0;
}