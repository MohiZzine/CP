#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string s;
  int c = 1;
  while(getline(cin, s)) {
    if (s == "#") break;
    string ans = "UNKNOWN";
    if (s == "HELLO") {
      ans = "ENGLISH";
    } else if (s == "HOLA") {
      ans = "SPANISH";
    } else if (s == "BONJOUR") {
      ans = "FRENCH";
    } else if (s =="CIAO") {
      ans = "ITALIAN";
    } else if (s == "ZDRAVSTVUJTE") {
      ans = "RUSSIAN";
    } else if (s == "HALLO") {
      ans = "GERMAN";
    }
    printf("Case %d: %s\n", c++, ans.c_str());
  }
  return 0;
}