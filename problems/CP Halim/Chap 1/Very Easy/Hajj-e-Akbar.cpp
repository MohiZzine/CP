#include <bits/stdc++.h>

using namespace std;

int main() {
	string s;
	int i = 1;
	while(getline(cin, s)) {
		if (s == "*") break;
		string ans;
		if (strcmp("Hajj", s.c_str()) == 0) ans = "Hajj-e-Akbar\n";
		else if (strcmp("Umrah", s.c_str()) == 0) ans = "Hajj-e-Asghar\n";
		printf("Case %d: %s", i++, ans.c_str());
	}
	return 0;
}