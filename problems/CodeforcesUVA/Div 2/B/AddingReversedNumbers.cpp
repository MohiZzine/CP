//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N; cin >> N;
    while(N--) {
        string s1, s2;
        cin >> s1 >> s2;
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        stack<int> first, second, carr;
        queue<int> q;
        for (int i = 0; i < s1.length(); i++)
            first.push(s1[i] - '0');
        for (int j = 0; j < s2.length(); j++)
            second.push(s2[j] - '0');

        int carry = 0;
        while(!first.empty() && !second.empty()) {
            int f = first.top(), s = second.top();
            first.pop(); second.pop();
            int res = (f + s + carry) % 10;
            carry = (f + s + carry) / 10;
            if (res == 0) continue;
            q.push(res);
        }

        while (!first.empty()) {
            int f = first.top();
            first.pop();
            int res = (f + carry) % 10;
            carry = (f + carry) / 10;
            if (res == 0) continue;
            q.push(res);
        }

        while (!second.empty()) {
            int s = second.top();
            second.pop();
            int res = (s + carry) % 10;
            carry = (s + carry) / 10;
            if (res == 0) continue;
            q.push(res);
        }
        while(!carr.empty()) {
            int k = carr.top(); carr.pop();
            printf("%d", carr);
        }

        while(!q.empty()) {
            int k = q.front(); q.pop();
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}