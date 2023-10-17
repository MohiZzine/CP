//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    while(scanf("%d", &N), N) {
        int arr[N], m_num = 25, ans = 0;
        string bloc;
        for (int j = 0; j < N; j++) {
            cin >> bloc;
            int count = 0;
            for (int i = 1; i < 24; i++) {
                if (bloc[i] == 'B') count++;
            }
            if (m_num < count) m_num = count;
            arr[j] = count;
        }
        if (m_num != 25) {
            for (int k = 0; k < N; k++) {
                ans += arr[k] - m_num;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}