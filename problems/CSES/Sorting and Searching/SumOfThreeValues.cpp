#include <bits/stdc++.h>

using namespace std;

int main() {
   int n, x; scanf("%d%d", &n, &x);

   vector<pair<long long, int>> vect(n);
   for (int i= 0; i <n; ++i) scanf("%lld", &vect[i].first), vect[i].second = i + 1;

   sort(vect.begin(), vect.end());

   int i;
   int l, r;
   for (i = 1; i < n - 1; i++) {
       l = 0, r = n - 1;
       long long t = vect[i].first;
       while(l < r && l < i && i < r) {
           if (t + vect[l].first + vect[r].first == x) {
               vector<int> sol = {vect[r].second, vect[i].second, vect[l].second};
               sort(sol.begin(), sol.end());
               printf("%d %d %d", sol[0], sol[1], sol[2]);
               return 0;
           }
           else if (t + vect[l].first + vect[r].first > x) r--;
           else l++;
       }
   }

  printf("IMPOSSIBLE");
   return 0;
}