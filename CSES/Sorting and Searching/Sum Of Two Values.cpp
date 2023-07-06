#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; cin >> n;
	long long target; cin >> target;
	int arr[n], an[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		an[i] = arr[i];
	}
	
	sort(an, an + n);
	int a = 0, b = n - 1;
	while(a < b) {
		if (an[a] + an[b] == target) {
			int first = find(arr, arr + n, an[a]) - arr, last = find(arr, arr + n, an[b]) - arr;
			
			cout << ++first << " " << ++last << endl; return 0;
		}
		else if (an[a] + an[b] > target) b--;
		else a++;
	}
	cout << "IMPOSSIBLE";
 	return 0;
}