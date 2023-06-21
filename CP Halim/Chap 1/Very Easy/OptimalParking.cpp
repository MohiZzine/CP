#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, a;
  cin >> N;
  while(N--) {
    cin >> a;
    int ans = 0;
    int M = -1, m = 100;
    while (a--) {
      int k; 
      cin >> k;
      if (k > M) M = k;
      if (k < m) m = k;
      }
    printf("%d\n", (M - m) * 2);
    }
  return 0;
}