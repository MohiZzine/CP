//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    while(cin >> s) {
        if (s == "#") break;
        if (next_permutation(s.begin(), s.end())) cout << s;
        else cout << "No Successor";
        cout << endl;
    }
    return 0;
}