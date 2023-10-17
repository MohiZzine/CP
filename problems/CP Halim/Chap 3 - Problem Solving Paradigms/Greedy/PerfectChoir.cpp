#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    while(scanf("%d", &N) == 1) {
        vector<int> mem(N);
        int sum = 0;
        for (int i = 0; i < N; i++) {
            cin >> mem[i];
            sum += mem[i];
        }

        if (sum % N != 0) {
            cout << -1 << endl;
        }  else {
            int avg = sum / N, ans = 0;
            for (int i = 0; i < N; i++) {
                ans += abs(avg - mem[i]);
            }

            cout << 1 + ans / 2 << endl;
        }
    }

    return 0;
}