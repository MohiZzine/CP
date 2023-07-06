#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, best = 0; cin >> n;
	long long weights[n];
	long long x; cin >> x;
	for (int i = 0; i < n; i++) {
		long long w; cin >> weights[i];
	}
	
	sort(weights, weights + n);
	
	int a = 0, b = n - 1;
	while(a < b) {
		if (weights[a] + weights[b] <= x) {
			a++; b--; 
		} else {
			b--;
		}
		best++;
	}
	if (a == b) best++;
	cout << best;

	return 0;
}