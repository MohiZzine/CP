#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  while (cin >> N) {
    if (N < 0) break;
    float payment, amount, owed_by;
    int n_dep, n_month = 0;
    cin >> payment >> amount >> n_dep;
    owed_by = amount;
    while(owed_by >= amount && n_dep--) {
      int dep;
      float dep_record;
      cin >> dep >> dep_record;
      if (n_month == dep - 1) {}
    }
  }
  return 0;
}