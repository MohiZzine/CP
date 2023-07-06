//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	unordered_set<long long> sint;
//	int n; cin >> n;
//	while(n--) {
//		long long x; cin >> x;
//		sint.insert(x);
//	}
//	cout << sint.size();
//	
//	return 0;
//}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<long long> s;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }

    cout << s.size() << endl;

    return 0;
}
