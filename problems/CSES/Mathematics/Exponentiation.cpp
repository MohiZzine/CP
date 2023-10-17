#include <bits/stdc++.h>

using namespace std;

const long long MODULO = 1e9 + 7;

long long expo(long long a, long long b, long long modulo = MODULO) {
	if (b == 0) return 1 % modulo;
	long long u = expo(a, b / 2);
	u = (u * u) % modulo;
	if (b % 2 == 1) u = (u * a) % modulo;
	return u;
}

int main() {
	int n; cin >> n;
	while(n--) {
		long long a, b; cin >> a >> b;
		long long result = expo(a, b);
		cout << result << endl;
	}
	return 0;
}