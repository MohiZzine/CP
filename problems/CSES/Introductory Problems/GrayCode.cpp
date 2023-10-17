#include<bits/stdc++.h>

using namespace std;

void gray(int n) {
  if (n == 0) { cout << endl; return;}
  for (int i = 0; i < (1 << n) / 2; i++) {
    cout << 0; gray(n - 1);
  }
  for (int i = 0; i < (1 << n) / 2; i++) {
    cout << 1; gray(n-1);
  }
}

void solve() {
  int n; cin >> n;
  for (int i = 0; i < (1 << n); i++) {
    for (int j = 0; j < n; j++) {
      if (i & (1<<j)) cout << 1;
      else cout << 0;
    }
    cout << "\n";
  }
}

int main() {
  // solve();
  int n; cin >> n;
  gray(n);
 return 0;
}