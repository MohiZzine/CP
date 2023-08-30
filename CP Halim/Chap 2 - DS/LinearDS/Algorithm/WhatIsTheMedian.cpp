//
// Created by Mohi
//

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int n;
    while(scanf("%d", &n) != EOF) {
        v.push_back(n);
        nth_element(v.begin(), v.begin() + v.size() / 2, v.end());
        int m1 = *(v.begin() + v.size() / 2);
        int m2 = m1;

        if (v.size() % 2 == 0) {
            nth_element(v.begin(), v.begin() + v.size() / 2 - 1, v.end());
            m2 = *(v.begin() + v.size() / 2 - 1);
        }

        cout << (m1 + m2) / 2 << endl;
    }




    return 0;
}