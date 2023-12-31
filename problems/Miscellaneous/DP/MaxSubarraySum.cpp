//
// Created by Student on 12/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
//    int x; cin >> x;
    int n = 9, A[] = { 4, -5, 4, -3, 4, 4, -4, 4, -5 }; // a sample array A
    int sum = 0, ans = 0; // important, ans must be initialized to 0
    for (int i = 0; i < n; i++) { // linear scan, O(n)
        sum += A[i]; // we greedily extend this running sum
        ans = max(ans, sum); // we keep the maximum RSQ overall
        if (sum < 0) sum = 0; // but we reset the running sum
    } // if it ever dips below 0
    printf("Max 1D Range Sum = %d\n", ans);

    return 0;
}