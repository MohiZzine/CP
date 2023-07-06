#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int start = true;
	vector<string> v;
	string res = "";
	char* inp;
	while (cin >> inp) {
		if (*(inp + strlen(inp) - 1) == EOF) 
		break;
		string out = "";
		for (int i = 0; i < strlen(inp); i++) {
			if (*(inp + i) == '"') {
				out += start ? "``": "''";
				start = !start;
			}
			v.push_back(out);
		}
	}
	
	for (string &s: v) {
		cout << s << endl;
	}
//	printf("%s", res);
	return 0;
//	while(gets(inp)) {
//		for (int i = 0; i < strlen(inp); i++) {
//			if (inp[i] == '"') {
//				res += start ? "``": "''";
//				start = !start;
//			}
//		}
//	}
//	for (int i = 0; inp[i] != EOF; i++) {
//		if (inp[i] == '"') {
//			res += start ? "``": "''";
//			start = !start;
//		}
//	}
//	printf("%s", res);
//	return 0;
}