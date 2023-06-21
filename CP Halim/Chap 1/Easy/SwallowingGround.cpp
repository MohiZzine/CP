#include <bits/stdc++.h>

using namespace std;

int main() {
  int TC;
  cin >> TC;
  while(TC--) {
    int cols; cin >> cols;
    bool resp = true;
    int north, east;
    cin >> north >> east;
    int diff = north - east;
    for (int i = 0; i < cols - 1; i++) {
      cin >> north >> east;
      if (diff != north - east) {
        resp = false;
      }
    }
    if (resp) {
      printf("yes\n");
    } else {
      printf("no\n");
    }
    if (TC) printf("\n");
  }
  return 0;
}