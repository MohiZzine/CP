#include <bits/stdc++.h>

using namespace std;

char result(string s) {
	if (s == "1" || s == "4" || s == "78") return '+';
	int k = s.length();
	if (s[k - 1] == '5' && s[k - 2] == '3') return '-';
	if (s[0] == '9' && s[k - 1] == '4') return '*';
	if (s[0] == '1' && s[1] == '9' && s[2] == '0') return '?';
}

int main() {
	int TC;
	cin >> TC;
	while(TC--) {
		string s;
		cin >> s;
		printf("%c\n", result(s));
	}
	return 0;
}