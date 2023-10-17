#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 5;

int main() {
  long long n, m, x, y; cin >> n >> m >> x >> y;
  int k; cin >> k;
  long long count = 0;
  int q; cin >> q;
  while(q--) {
    long long dx, dy; cin >> dx >> dy;
    long long a1 = INF, a2 = INF;
    if (dx > 0) {
      a1 = (n - x) / dx;
    } else if (dx < 0) {
      a1 = (x - 1) / (-dx);
    }

    if (dy > 0) {
      a2 = (n - x) / dy;
    } else if (dy < 0) {
      a2 = (y - 1) / (-dy);
    }

    long long sol = min(a1, a2);
    count += sol;
    x += sol * dx;
    y += sol * dy;
  }

  cout << count;

  return 0;
}