//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    char top[] = "qwertyuiop", center[] = "asdfghjkl;", bottom[] = "zxcvbnm,./";
    char dir; cin >> dir;
    string word; cin >> word;
    int i = 0;
    while(i < word.size()) {
        char x;
        for (int j = 0; j < 10; j++) {
            if (top[j] == word[i])
                if (dir == 'R') {
                    x = top[j - 1]; break;
                } else {
                    x = top[j + 1]; break;
                }
            if (center[j] == word[i])
                if (dir == 'R') {
                    x = center[j - 1]; break;
                } else {
                    x = center[j + 1]; break;
                }
            if (bottom[j] == word[i])
                if (dir == 'R') {
                    x = bottom[j - 1]; break;
                } else {
                    x = bottom[j + 1]; break;
                }
        }
        printf("%c", x);
        i++;
    }
    return 0;
}//
// Created by ADMIN on 27/07/2023.
//
