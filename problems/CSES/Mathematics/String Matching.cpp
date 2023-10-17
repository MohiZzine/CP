#include <bits/stdc++.h>

using namespace std;

int main() {
	int sol = 0;
	string n, m; cin >> n >> m;
	int M = m.size(), N = n.size(), i = 0;
	while( i < N ) {
		int j = 0;
		while(j < M) {
			if (m[j] != n[i]) {
				i++; break;
			}
			i++; j++;
		}
		
		if (j == M) {
			sol++;
		}
	}
	cout << sol;
	return 0;
}