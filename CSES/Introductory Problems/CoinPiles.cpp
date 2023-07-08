#include<bits/stdc++.h>

using namespace std;

bool solve(int a, int b) {
  // if (a < b) swap(a, b);
  if (max(a, b)> 2 * min(a, b)) return false;
  if ((a + b) % 3 == 0) return true;
  else return false;
}
int main() {
  int t; cin >> t;
  while(t--) {
    int a, b; cin >> a >> b;
    if (solve(a, b)) cout << "YES\n";
    else cout << "NO\n";
  }
 return 0;
}