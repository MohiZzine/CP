#include <bits/stdc++.h>

using namespace std;

int main() {
  int TC; cin >> TC;
  while(TC--) {
    int N, p = 0; cin >> N;
    int moves[N];
    for (int i = 0; i < N; i++) {
      string dir; cin >> dir;
      if (dir == "LEFT") {
        p--;
        moves[i] = -1;
      }
      else if (dir == "RIGHT") {
        p++;
        moves[i] = 1;
      }
      else if (dir == "SAME") {
        cin >> dir;
        cin >> dir;
        p += moves[stoi(dir) - 1];
        moves[i] = moves[stoi(dir) - 1];
      }
    }
    printf("%d\n", p);
  }
  return 0;
}