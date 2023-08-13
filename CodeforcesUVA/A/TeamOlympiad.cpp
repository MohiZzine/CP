//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a = 0, b = 0, c = 0; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1) a++;
        if (arr[i] == 2) b++;
        if (arr[i] == 3) c++;
    }

    int w = min(min(a, b), c), i = 0;
    printf("%d\n", w);
    bool chosen[n];
    memset(chosen, 0, sizeof(chosen));
    while(w--) {
        i = 0;
        while(arr[i] != 1 || chosen[i]) i++;
        cout << i + 1 << " ";
        chosen[i] = true;
        i = 0;
        while(arr[i] != 2 || chosen[i]) i++;
        cout << i + 1 << " ";
        chosen[i] = true;
        i = 0;
        while(arr[i] != 3 || chosen[i]) i++;
        cout << i + 1 << endl;
        chosen[i] = true;
    }
    return 0;
}