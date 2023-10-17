#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k; cin >> n >> k;
  int a;
  for (int i = 0; i < k; i++) {
    cin >> a;
    if (a == 0) {
      cout << i << endl;
      return 0;
    }
  }

  for (int j = k; j < n; j++) {
    int b; cin >> b;
    if (b != a) {
      cout << j << endl;
      return 0;
    }
  }

  cout << n << endl;
  return 0;
}