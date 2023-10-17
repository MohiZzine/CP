//
// Created By MOHI
//
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0, i = 0;
    while(i < s.length()) {
        if (islower(s[i++])) count++;
    }
    if (s.length() - count > count) transform(s.begin(), s.end(), s.begin(), ::toupper);
    else transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
    return 0;
}