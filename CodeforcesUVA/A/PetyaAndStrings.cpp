#include <bits/stdc++.h>
#include <string>
#include <cctype>

using namespace std;
int main() {
  string s1, s2; cin >> s1 >> s2;
  int i = 0;
  while (i < s1.size() && i < s2.size()) {
  if (tolower(s1[i]) > tolower(s2[i])) {
    cout << 1;
    return 0;
  }
  if (tolower(s1[i]) < tolower(s2[i]))  {
    cout << -1;
    return 0;
  }
  i++;
  }

  if (i == s1.size() && i ==  s2.size()) cout << 0;
  else if (i == s1.size()) cout << -1;
  else cout << 1;
  return 0;
}