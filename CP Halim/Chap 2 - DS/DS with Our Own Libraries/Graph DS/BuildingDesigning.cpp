//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int p; cin >> p;
    while(p--) {
        int n, ans = 0; cin >> n;
        vector<int> red, blue;
        while(n--) {
            int k; cin >> k;
            if (k > 0) blue.push_back(k);
            else red.push_back(k);
        }

        sort(blue.begin(), blue.end(), greater<int>());
        sort(red.begin(), red.end());

        int b = 0, r = 0;
        char turn;

        if (abs(blue[0]) > abs(red[0])) b++, turn = 'R';
        else r++, turn = 'B';
        while(b < blue.size() && r < red.size()) {
            while(abs(blue[b]) )
        }
    }
    return 0;
}