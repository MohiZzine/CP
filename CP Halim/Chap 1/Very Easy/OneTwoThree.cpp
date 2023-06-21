#include <bits/stdc++.h>

using namespace std;

int main() {
  int TC;
  cin >> TC;
  while(TC--) {
    string s;
    int ans = 0;
    cin >> s;
    if (s.length() == 5) ans = 3;
    else {
      if ((s[0] == 't' && s[1] == 'w') || (s[1] == 'w' && s[2] == 'o') || (s[0] == 't' && s[2] == 'o')) ans = 2;
      else ans = 1;
    }
    printf("%d\n", ans);
  }
  return 0;
}