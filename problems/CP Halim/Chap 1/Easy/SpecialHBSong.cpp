#include <bits/stdc++.h>

using namespace std;

int main() {
  string words[] = {"Happy", "birthday", "to", "you", "Rujia"};
  int N, iter = 0; cin >> N;
  int k = N;
  string pers[N];
  while(N && iter < 4) {
    string pers; cin >> pers[k - N];
    printf("%s: %s\n", pers.c_str(), pers[k - N].c_str());
    if ()
  }
  return 0;
}