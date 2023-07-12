//
// Created by Student on 11/07/2023.
//

#include <bits/stdc++.h>


using namespace std;

#define MAX_DIFF 1000000

int min(int a, int b) {
    return a > b ? b: a;
}

int main() {
    int cas = 1;
    string s;
    while(cin >> s) {
        vector<stack<char>> containers;
        int closest = MAX_DIFF, distance, j, idx;
        if (s[0] == 'e') break;
        stack<char> st; st.push(s[0]);
        containers.push_back(st);
        for (int i = 1; i < s.size(); i++) {
            j = 0;
            while(j < containers.size()) {
                char top = containers[j].top();
                if (s[i] <= top) {
                    distance = top - s[i];
                    closest = min(closest, distance);
                    if (closest == distance) idx = j;
                }
                j++;
            }
            if (closest == MAX_DIFF) {
                stack<char> new_stack; new_stack.push(s[i]);
                containers.push_back(new_stack);
            } else {
                containers[idx].push(s[i]);
            }
            closest = MAX_DIFF;
        }
        printf("Case %d: %d\n", cas++, containers.size());
    }

    return 0;
}
