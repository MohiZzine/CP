#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int n; cin >> n;
    int ans1 = 0, ans2 = 0, ans3 = 0;
    int arr[3][3] = {0};
    for (int i = 0; i < 3; i++) arr[i][i] = 1;

    while(n--) {
        int a, b; cin >> a >> b;
        int g; cin >> g;
        --a; --b; --g;
        for (int i = 0; i < 3; i++) {
            swap(arr[i][a], arr[i][b]);
            if (i == 0)
                if (arr[i][g]) ans1++;
            if (i == 1)
                if (arr[i][g]) ans2++;
            if (i == 2)
                if (arr[i][g]) ans3++;
        }

    }

    cout << max(max(ans1, ans2), ans3);
    return 0;
}