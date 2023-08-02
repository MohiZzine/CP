#include <bits/stdc++.h>

using namespace std;

int ans[100010], arr[100010];
int n;
//int solve(int k) {
//    if (ans[k] != -1) return ans[k];
//    int v = 1;
//    while(arr[v - 1] != k && v < n) v++;
//    ans[k] = v;
//    return ans[k];
//}

int main() {
//    memset(ans, -1, sizeof(ans));
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int num; cin >> num;
        ans[num] = i;
    }

    int m; cin >> m;
    long long vas = 0, pet = 0;
    for (int i = 0; i < m; i++) {
        int k; cin >> k;
        vas += ans[k]; pet += n - ans[k] + 1;
    }
    printf("%I64d %I64d", vas, pet);


    return 0;
}