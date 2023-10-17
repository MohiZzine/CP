//
// Created by Student on 11/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    while(cin >> s) {
    stack<char> braces;
    int cur = 0, best = 0, num = 0, i = 0;
    while(i < s.size()) {
        if (s[i] == ')') {
            if (braces.empty()) cur = 0;
            else {
                braces.pop();
                cur += 2;
                if (cur > best) {
                    best = cur;
                    num = 1;
                } else if (cur == best ) {
                    num++;
                }
            }
        } else if (s[i] == '(') {
            braces.push(s[i]);
        }
        i++;
    }
    if (!braces.empty()) {
        best -= 2;
    }
    if (num != 0) printf("%d %d", best, num);
    else printf("0 1");
    }
    return 0;
}