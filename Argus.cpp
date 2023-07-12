//
// Created by Student on 11/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

struct ComparePairs {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) const {
        if (a.second == b.second) {
            return a.first > b.first;
        }
        return a.second > b.second;
    }
};

int main() {
//    int
    string instr;
    pair<int, int> top;
    map<int, int> registers;

    priority_queue<pair<int,pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

    while(cin >> instr) {
        if (instr[0] == '#') break;
        int q, period; cin >> q >> period;
        pq.push(pair<int, pair<int, int>>(period, pair<int, int>(q, period)));
    }

    int K; cin >> K;

    while(K--) {
        pair<int, pair<int, int>> pr = pq.top();
        pq.pop();

        printf("%d\n", pr.second.first);
        pr.first += pr.second.second;
        pq.push(pr);
    }

    return 0;
}