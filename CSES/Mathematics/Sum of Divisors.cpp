#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

long long solve(int x) {
	long long res = 1;
	unordered_map<int, int> factors;
	if (x == 2) factors = {{2, 1}};
	if (x == 3) factors = {{3, 1}};
	for (int k = 2; k * k <= x; k++) {
		while(x % k == 0) {
			factors[k]++;
			x /= k;
		}
		if (x > 1) factors[x]++;
	}
	
	for (auto x: factors) {
		cout << x.first << " " << x.second <<endl;
	}
	
	for (auto x: factors) {
		long long term = 1, fac = 1;
		while(x.second > 0) {
			fac *= (x.first % MOD);
			term += (fac % MOD);
			x.second--;
		}
		res *= (term % MOD);
	}
	return res % MOD;
}

int main() {
	long long n, ans = 0; cin >> n;
	
	for (int k = 1; k <= n; k++) {
		ans += solve(k);
	}
	cout << ans;
	return 0;
}