#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    stack<string> tags;
    while(n--) {
        string s; cin >> s;
        if (s.find("End") != string::npos) {
            if (!tags.empty() && tags.top() == s.substr(3)) tags.pop();
            else {
                cout << "WA";
                return 0;
            }
        } else {
            tags.push(s);
        }
    }

    if (tags.empty()) cout << "ACC";
    else cout << "WA";
    return 0;
}