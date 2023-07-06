#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		long long row, col; cin >> row >> col;
		long long m = max(row, col), diag = m * (m - 1) + 1;
		if (row == col) {
			cout << diag << endl; continue;
		}
		if (m == row) {
			if (row % 2 == 0) {
				cout << diag + (m - col) << endl;
			} else {
				cout << diag - (m - col) << endl;
			}
		} else {
			if (col % 2 == 0) {
				cout << diag - (m - row) << endl;
			} else {
				cout << diag + (m - row) << endl;
			}
		}
	}
	return 0;
}