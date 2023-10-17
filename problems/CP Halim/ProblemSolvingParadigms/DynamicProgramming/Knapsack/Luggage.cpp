//
// Created by Student on 13/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

bool m[201]; // m[i] = 1 if a sum is reachable

set<int> first, scnd;
bool solve(vector<int> vect) {
    if (vect.size() == 1) return false;

}

vector<int> vect(10, 0);

int main() {
    int M; cin >> M;
    while(M--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string num;
        vector<int> wth;
        while(ss >> num) {
            wth.push_back(stoi(num));
        }

        for (int i = 0; i < wth.size(); i++) {
            for (int M = 200; )
        }
    }

    return 0;
}