//
// Created by Student on 15/07/2023.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while(scanf("%d", &n), n) {
        int ans = 0;
        int arr[n];
        int dollar, cent, sum = 0;
        char temp;

//        float ans = 0;
        for (int i= 0; i < n; i++) {
            cin >> dollar >> temp >> cent;
            arr[i] = dollar * 100 + cent;
            sum += arr[i];
        }

        int lowAvg = sum / n;
        int highAvg = lowAvg + ((sum % n) ? 1: 0);

        int aboveSum = 0, belowSum = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > highAvg)
                aboveSum += arr[i] - highAvg;
            if (arr[i] < lowAvg)
                belowSum += lowAvg - arr[i];
        }

        int usedSum = max(aboveSum, belowSum);
        cout << '$' << (usedSum / 100) << '.' << setw(2) << setfill('0') << (usedSum % 100) << '\n';
    }

    return 0;
}