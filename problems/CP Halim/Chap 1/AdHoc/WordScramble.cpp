//
// Created by Student on 10/07/2023.
//

#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main() {
    string s;
    stack<string> st;
    while(getline(cin, s)) {
        if (s.empty()) return 0;
        int i = 0;
        string word = "";
        while(i < s.size()) {
            if (s[i] == ' ') { i++; cout << " "; continue; }
            word += s[i];
            if(s[i + 1] == ' ' || s[i + 1] == '\0' || s[i + 1] == '\n') {
                for (int j = word.size() - 1; j >= 0; j--) {
                    cout << word[j];
                }
                word = "";
            }
            i++;
        }
        cout << "\n";
//        for (int i = 0; i < s.size(); i++) {
//            string word = "";
//            if (s[i] == ' ') continue;
//            word +=
//        }
    }

    return 0;
}
