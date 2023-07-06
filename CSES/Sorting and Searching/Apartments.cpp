//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	int n, m, M = 0; cin >> n >> m;
//	long long k; cin >> k;
//	
//	long long aparts[m], apps[n];
//	for (int i = 0; i < n; i++) {
//		cin >> apps[i];
//	}
//	for (int i = 0; i <m; i++) {
//		cin >> aparts[i];
//	}
//	
//	sort(aparts, aparts + m);
//	sort(apps, apps + n);
//	for (int j = 0; j < m; j++) {
//		for (int i = 0; i < n; i++) {
//			if (apps[i] + k >= aparts[j] && apps[i] - k <= aparts[j]) {
//				M++; break;
//			}
//		}
//	}
//	cout << M;
//	return 0;
//}