#include <bits/stdc++.h>

using namespace std;

const long long MODULO = 1e9 + 7;

long long solve(int x) {
	int k = 1, ans = 0;
	while (k * k < x) {
		if (x % k == 0) ans += 2;
		k++; 
	}
	if (k * k == x) return ++ans;
	return ans;
}

int main() {
	int n; cin >> n;
	while(n--) {
		int x; cin >> x;
		cout << solve(x) << endl;
	}
	return 0;
}