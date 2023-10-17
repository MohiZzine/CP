#include <bits/stdc++.h>

using namespace std;

int main() {
   int n, m, k; cin >> n >> m >> k;
   vector<int> v(m + 1);
   for (int i = 0; i < m + 1; i++) {
       cin >> v[i];
   }

   int fedya = v[m], friends = 0;
   for (int j = 0; j < m; j++) {
       int common = __builtin_popcount(fedya ^ v[j]);
       if (common <= k) friends++;
   }

   cout << friends;
   return 0;
}