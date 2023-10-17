#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, step = 0;cin >> n;
	long long m, nouv, res = 0; 
	while(n--) {
		if (step++ == 0) {
			cin >> m; continue;
		}
		else {
		cin >> nouv;
		if (m > nouv) res += (m - nouv);
		m = max(m, nouv);
		}
	}
	cout << res;
	return 0;
}