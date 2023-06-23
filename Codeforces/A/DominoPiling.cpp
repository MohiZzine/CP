#include <bits/stdc++.h>

using namespace std;

int main() {
  int m, n; cin >> m >> n;
  if (m % 2 == 0 && n % 2 == 0) {
    cout << (m / 2) * n;
    return 0;
  } 
  if (m % 2 == 1 && n % 2 == 0) {
    cout << (n / 2) * m;
    return 0;
  } 

  if (n % 2 == 1 && m % 2 == 0) {
    cout <<(m / 2) * n;
    return 0;
  }
  if (n % 2 == 1 && m % 2 == 1) {
    cout << (n / 2) * m + m / 2;
    return 0;
  }
}