#include <bits/stdc++.h>

#define PB push_back
#define MP make_pair

#define REP(i, a, b) for (int i = a; i < b; i++)	
using namespace std;

int main() {	
	int ans1 = 0, ans2 = 0;
	for (int i = 1; i < 10; i++) {
		ans1 += i;
	}
	REP(i, 1, 10) {
		ans2 += i;
	}
	
	printf("Answer 1: %d\nAnswer 2: %d\n", ans1, ans2);
	return 0;
}