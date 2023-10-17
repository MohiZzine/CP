#include<bits/stdc++.h>

using namespace std;

typedef priority_queue<int, vector<int>, greater<int>> min_pq;

typedef long long ll;

// ll solve(min_pq pq) {
//   ll min_cost = pq.top();
//   pq.pop();
//   for (int i = 0; i < pq.size(); i++) {
//     min_cost += pq.top();
//     pq.pop();
//     pq.push(min_cost);
//   }
//   min_cost += pq.top();
//   return min_cost;
// }

ll solve(min_pq pq) {
  ll min_cost = 0, k, sum = 0;
  while(pq.size() > 1) {
    k = pq.top();
    pq.pop();
    k += pq.top();
    pq.pop();
    // sum += k; 
    // if (pq.size() == 1) {
    //   min_cost += sum;
    //   return min_cost;
    // }
    // sum += k;
    pq.push(k);
    min_cost += k;
  }
  return min_cost;
} 

void print_pq(min_pq pq) {
  while(!pq.empty()) {
    printf("%d ", pq.top()); pq.pop();
  }
}

int main() {
  int n;
  while(scanf("%d", &n), n) {
    min_pq pq;
    while(n--) {
      int k; cin >> k;
      pq.push(k);
    }
    cout << solve(pq) <<endl;
  }
 return 0;
}