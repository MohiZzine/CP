#include <bits/stdc++.h>

using namespace std;

int const MIN = -100010;

int main() {
    int N; cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) cin >> arr[i];
    long long ans = MIN, sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
        ans = max(ans, sum);
        if (sum < 0) sum = 0;
    }

    cout << ans;
    return 0;
}