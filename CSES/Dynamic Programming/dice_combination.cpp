#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

long long results[1000001] = {0};
bool found[10000001] = {false};

long long coin(int x) {
  if (found[x]) return results[x];
  for (int i = 1; i <= 6; i++) {
    if (x - i >= 0) {
    results[x] += coin(x - i);
    results[x] %= MOD;
    }
  }
  found[x] = true;
  return results[x];
}

int main() {
  int n; cin >> n;
  results[0] = 1; found[0] = true;
  cout << coin(n);
 return 0;
} 