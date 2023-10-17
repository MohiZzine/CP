#include <bits/stdc++.h>

using namespace std;

int main() {, "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    freopen("mixmilk.in"

    long long bucket[3][2]; cin >> bucket[0][0] >> bucket[0][1] >> bucket[1][0] >> bucket[1][1] >> bucket[2][0] >> bucket[2][1];
    int count = 0, curr = 0;
    while(count < 100) {
        int next = (curr + 1) % 3;
        if (bucket[curr][1] + bucket[next][1] > bucket[next][0]) {
            bucket[curr][1] -= bucket[next][0] - bucket[next][1];
            bucket[next][1] = bucket[next][0];
        } else {
            bucket[next][1] += bucket[curr][1];
            bucket[curr][1] = 0;
        }

        curr = next;
        count++;
    }

    for (int i = 0; i < 3; i++) printf("%lld\n", bucket[i][1]);
    return 0;
}