#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin >> T;
	long long sum = 0;
	char s[20];
	while(T--) {
		scanf("%s", s);
		int x;
		if (strcmp("donate", s) == 0) {
			scanf("%d", &x);
			sum += x;
		} else {
			printf("%d\n", sum);
		}
	}
	return 0;
}