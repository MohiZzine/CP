//
// Created by Student on 10/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

map<string, int> valid_words;
int code;

void enumerateStrings(string s, size_t len) {
    if (s.size() == len) {
        valid_words[s] = code++;
        return;
    }

    char lastLetter;
    if (s.empty()) lastLetter = 'a';
    else lastLetter = s[s.size() - 1] + 1;

    for (char c = lastLetter; c <= 'z'; c++) {
        enumerateStrings(s + c, len);
    }
}

int main() {
    code = 1;

    for (size_t len = 1; len <= 5; len++) {
        enumerateStrings("", len);
    }

    string word;
    while(cin >> word) {
        cout << valid_words[word] << endl;
    }
    return 0;
}
