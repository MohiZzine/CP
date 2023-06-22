#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, k = 0;
  cin >> N;
  while (N--) {
    bool ordered = true;
    int first, recent;
    cin >> first >> recent;
    int order = first <= recent ? 1 : -1;
    for (int i = 0; i < 8; i++) {
      int other;
      cin >> other;
      if ((other >= recent && order == -1) || (other <= recent && order == 1)) {
        ordered = false;
      }
      recent = other;
    }
    if (!k) {
      printf("Lumberjacks:\n");
    }
    k++;
    if (ordered) {
      printf("Ordered\n");
    } else {
      printf("Unordered\n");
    }
  }
  return 0;
}
