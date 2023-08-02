#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  int N; cin >> N;
  while(N--) {
    string word; cin >> word;
    if (word.size() > 10) {
      printf("%c%d%c\n", word[0], word.size() - 2, word[word.size() - 1]);
       continue;
    } else printf("%s\n", word.c_str());
  }
  return 0;
}