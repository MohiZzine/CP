#include<bits/stdc++.h>

using namespace std;

int main() {
  int n, q; cin >> n >> q;
  long long arr[n + 1];
  arr[0] = 0;
  for (int i = 1; i <= n; i++) {
      cin >> arr[i];
      arr[i] += arr[i - 1];
  }

  while(q--) {
    int a, b; cin >> a >> b;
    printf("%lld\n", arr[b] - arr[a - 1]);
  }
 return 0;
}