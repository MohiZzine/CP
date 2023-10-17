#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    stack<char> st;

    int nonclosed = 0;

    while(n--) {
        char c; cin >> c;
        if (c == '(') st.push(c);
        else {
            if (!st.empty()) st.pop();
            else nonclosed++;
        }
    }

    if (st.size() == 0 && nonclosed == 0) cout << "Yes";
    else if (st.size() == 1 && nonclosed == 1) cout << "Yes";
    else {
        cout << "No";
    }
    return 0;
}