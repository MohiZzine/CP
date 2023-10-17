#include <bits/stdc++.h>

using namespace std;

long long solve(long long n, long long primes[], int k) {
	long long odd = 0, even = 0;
	long long p = 1;
	int pow_set_size = (1 << k);
	for (int count = 0; count < pow_set_size; count++) {
		p = 1;
		for (int j = 0; j < k; j++) {
			if (count & (1 << j)) p *= primes[j];
		}
		if (__builtin_popcount(count) & 1) odd += n / p;
		else even += n / p;
	}
	
	return odd - even;
}

int main() {
	long long n; cin >> n;
	int k; cin >> k;
	long long primes[k];
	for (int i = 0; i < k; i++) {
		cin >> primes[i];
	}
	cout << n + solve(n, primes, k);
	return 0;
}