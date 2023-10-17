#include <bits/stdc++.h>

using namespace std;

int main() {
	int x = 63;
	int res = 63 & 8;
	cout << res << endl;
	for (int k = 31; k >= 0; k--) {
		if (x & (1 << k)) cout << "1";
		else cout << "0";
	}
	return 0;
}