#include <bits/stdc++.h>

using namespace std;

int main() {
  int TC, k = 1; cin >> TC;
  while(TC--) {
    int N, high = 0, low = 0; cin >> N;
    int last; cin >> last;
    while(N-- > 1) {
      int curr; cin >> curr;
      if (curr < last)
      low++;
      else if (curr > last) high++;
      last = curr;
    }
    printf("Case %d: %d %d\n", k++, high, low);
  }
  return 0;
}