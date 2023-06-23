#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> v = {2, 4, 1, 1, 8, 3};
  sort(v.begin() + 1, v.end());

  for (auto x: v) {
    cout << x << " " ;
  }
  return 0;
}