#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;
const int M = 10000;
vector<vector<long long>> binomials;
//vector<pair<int, int>, long long> binomials;


long long binom(int a, int b) {
	if (binomials[a][b] != -1) return binomials[a][b];
	binomials[a][b] = ((a % MOD) * (binom(a - 1, b - 1))) / (b % MOD);
	return binomials[a][b] % MOD;
}

int main() {
	for (int i = 0; i < M; i++)  {
		vector<long long> vect;
		for (int j = 0; j <= i; j++) {
			vect.push_back(-1);
			if (j == 0) vect[0] = 1;
		}
		binomials.push_back(vect);
	}
	


	int n; cin >> n;
	while(n--) {
		int a, b; cin >> a >> b;
		cout << binom(a, b) << endl;
	}
	
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j <= i; j++) {
//			cout << i << " choose " << j << " = " << binomials[i][j] << " " << endl;
//		}
//		cout << "\n";
//	}
	return 0;
}

