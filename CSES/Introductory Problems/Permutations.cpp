#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, step = 0; cin >> n;
	if (n == 2 || n == 3) {
		cout << "NO SOLUTION";
		return 0;
	}
	
	if (n == 1) {
		cout << 1; return 0;
	}
	
	if (n % 2 == 1) {
		for (int i = 1; i <= n / 2; i++) {
			if (step++ > 0) cout << " ";
			cout <<  n / 2 - i + 1 << " " << n / 2 + i + 1;
		}
		cout << " " << n / 2 + 1;
	}
	else {
		if (n % 4 == 0) {
			for (int i = 1; i < n; i += 4) {
				if (step++ > 0) {
					cout << " ";
				}
				cout << i + 2 << " " << i << " " << i + 3 << " " << i + 1;
			}	
		} else {
			cout << n - 1 << " ";
			for (int i = 1; i < n - 2; i+= 4) {
				if (step++ > 0) {
					cout << " ";
				}
				cout << i + 2 << " " << i << " " << i + 3 << " " << i + 1;
			}
			cout << " " << n;
		}
	}
	return 0;
}