#include <bits/stdc++.h>

using namespace std;

class RuntimeException {
	private:
		string errorMsg;
	public:
		RuntimeException(const string& err): { errorMsg = err; }
		string getMessage() const { return errorMsg; }
};

int main() {
	return 0;
}