//
// Created by Student on 12/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, i = 0; cin >> N;
    priority_queue<int> numbers;
    for (int j = 0; j < N; j++) {
        int k; cin >> k;
        numbers.push(k);
    }
    if (N & 1) {
        for (int j = 1; j < (N + 1) / 2; j++)
            numbers.pop();
        cout << numbers.top();
    } else {
        for (int j = 1; j < N / 2; j++)
            numbers.pop();
        int m = numbers.top();
        numbers.pop();
        int n = numbers.top();
        numbers.pop();
        cout << "m = " << m << " n = " << n << endl;
        float median = float(m + n) / 2;
        printf("%2.f", median);
    }
    return 0;
}