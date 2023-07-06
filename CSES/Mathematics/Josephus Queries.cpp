#include <bits/stdc++.h>

using namespace std;

int main(){
	int q; cin >> q;
	while(q--) {
		long long n, k, ans = 2; cin >> n >> k;
		while(--k) {
			ans += 2;
			if (ans >= n) {
				++ans %= n;
			}
		}
		cout << ans <<endl;
	}
	
	return 0;
} 