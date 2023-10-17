#include <bits/stdc++.h>

using namespace std;

int main() {
  int TC;
  cin >> TC;
  while(TC--) {
    int sum = 0, num_f;
    cin >> num_f;
      while (num_f--) {
        int size, num, env_fr;
        cin >> size >> num >> env_fr;
        sum += size * env_fr;
      }
    cout << sum << endl;
  }
  return 0;
} 