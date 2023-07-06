#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    bool start = true;
	string input;
	string s = "";
	while(getline(cin, input)) {
		int i = 0;
		while (i < input.length()) {
		    if (input[i] == '"') {
		        if (start) {
		            s += "``";
		        } else {
		            s += "''";
		        }
		        start = !start;
		        i++;
		        continue;
		    }
		    s += input[i];
		    i++;
		}
	}
	cout << s;
	return 0;
}