#include <bits/stdc++.h>

using namespace std;

int main() {
	int T, i = 1;
	cin >> T;
	while(T--) {
		int L, W, H;
		cin >> L >> W >> H;
		if (L > 20 || W > 20 || H > 20) {
		cout << "Case " << i++ << ": " << "bad\n";
		continue;
		}
		cout << "Case " << i++ << ": " << "good\n";
	}
	return 0;
}