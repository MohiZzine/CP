#include <bits/stdc++.h>

using namespace std;

int main() {
//	int n; cin >> n;
//	vector<int> nums;
//	for (int i = 1; i <= n; i++) {
//		nums.push_back(i);
//	}
//	
//	while(n-- != 1) {
//		int a; cin >> a;
//		nums.pop(a);	
//	}
//	
//	cout << nums[0];
//	return 0;

	int n; cin >> n;
	unordered_map<int, int> umap;
	for (int i = 1; i < n; i++) {
		int a; cin >> a;
		umap[a] = 1;
	}
	for (int i = 1; i <= n; i++) {
		if (umap.count(i)) continue;
		cout << i; break;
	}
	return 0;
}