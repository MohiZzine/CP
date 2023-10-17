#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,d;
    while(scanf("%d%d", &n, &d), n | d) {
        int arr[n][2], ans = 1;
        for (int i = 0; i < n; i++)
            cin >> arr[i][0] >> arr[i][1];

        for (int i = 0; i < n - 1; i++) {
            double dist = sqrt(pow(arr[i + 1][0] - arr[i][0], 2) + pow(arr[i + 1][1] - arr[i][1], 2));
            if (dist >)
        }
    }
    return 0;
}