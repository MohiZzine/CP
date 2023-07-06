#include <bits/stdc++.h>

using namespace std;

int pgcd(int x, int y) {
	if (y == 0) return x;
	return pgcd(y, x % y);
}

//unordered_map<int, int> prime_factors(int x) {
//	unordered_map<int, int> factors;
//	for (int k = 2; k * k <= x; k++) {
//		while( x % k == 0) {
//			factors[k]++;
//			x /= k;
//		}
//	}
//	if (x > 1) factors[x]++;
//	return factors;
//}
//
//int solve(int array[], int n) {
//	int best = 1;
//	unordered_map<int, unordered_map<int, int>> umap;
//	for (int j = 0; j < n; j++) {
//		umap[k] = prime_factors(array[j]);
//	} 
//	for (auto x: umap) {
//		
//	}
//}

int main() {
	int n, best = 1; cin >> n;
	int nums[n];
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int cur_pgcd = pgcd(nums[i], nums[j]);
//			cout << cur_pgcd << endl;
			if (best < cur_pgcd) best = cur_pgcd;
		}
	}
	cout << best;
	
	return 0;
}	