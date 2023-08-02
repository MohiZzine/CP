//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;



int main() {
    map<char, int> mp;
    mp.insert(pair<char,int>('A', 0));
    mp.insert(pair<char, int>('B', 0));
    mp.insert(pair<char, int>('C', 0));
    string s;
    int i = 0;
    while (i++ < 3) {
        cin >> s;
        if (s[1] == '>') mp[s[0]]++;
        else mp[s[2]]++;
    }

    if (mp['A'] == 1 && mp['B'] ==  1 && mp['C'] == 1)
        printf("Impossible");
    else {
        int i = 0;
        while(i < 3) {
            for (auto x: mp) {
                if (x.second == i) {
                    cout << x.first;
                    i++;
                    continue;
                }
            }
        }
    }

    return 0;
}