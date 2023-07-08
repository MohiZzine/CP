#include <bits/stdc++.h>

// Rest of your code...

using namespace std;

#define MAX 1000001
#define INF 10000000

bool found[MAX];
long long coin[MAX], x;
int n;


long long solve(set<int> s, long long x) {
  // if (x < 0) return INF;
  if (x == 0) return 0;
  if (found[x]) return coin[x];
  long long best = INF;
  for (auto c: s) {
    if (x - c >= 0)
    best = min(best, solve(s, x - c) + 1);
  }
  found[x] = true;
  coin[x] = best;
  return best;
}

int min(int a, int b) { return a > b ? b: a;}

int main() {
  cin >> n >> x;
  for (int i = 0; i < MAX; i++) {
    found[i] = false;
    coin[i] = -1;
  }
  coin[0] = 0;
  found[0] = true;
  set<int> s;
  while(n--) {
    int a; cin >> a; 
    s.insert(a);
  }
  if (solve(s, x) == INF) cout << -1;
  else cout << solve(s, x);
 return 0;
}