#include <bits/stdc++.h>

using namespace std;

char relationalOperator(int a, int b) {
  if (a > b) return '>';
  else if (a < b) return '<';
  return '=';
}

int main() {
  int N, a, b;
  cin >> N;
  while(N--) {
    cin >> a >> b;
    cout << relationalOperator(a, b) << endl;
  }
}