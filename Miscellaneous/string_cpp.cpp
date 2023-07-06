#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
	char s = 'a';
	char t = 'b';
	if (s > t) {
		cout << s << " > " << t << endl;
	} else {
		cout << s << " < " << t << endl;		
	}
	cout << s << " - " << t << " = " << (char)s - t;
}