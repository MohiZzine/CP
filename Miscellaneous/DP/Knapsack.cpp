//
// Created by Student on 10/07/2023.
//


#include <bits/stdc++.h>

using namespace std;

#define MAX_ITEMS 1000;

bool max(int a, int b) {
    return (a > b) ? a: b;
}

int knapsack(int W, int weights[], int values[], int knaps[], int N) {
    if (N == 0) return 0;
    if (knaps[W] !=  -1) return knaps[W];
    if (W - weights[N - 1] < 0) {
        knaps[W] = knapsack(W, weights, values, knaps, N - 1);
        return knaps[W];
    } else {
        knaps[W] = max(knapsack(W, weights, values, knaps, N - 1), values[N - 1] + knapsack(W - weights[N - 1], weights, values, knaps, N - 1));
        return knaps[W];
    }
}

int main() {
    cout << "Number of items: ";
    int N; cin >> N;
    int weights[N], values[N];
    cout << "Enter the items weights and their values: \n";
    for (int i = 0; i < N; i++) {
        cin >> weights[i] >> values[i];
    }
    cout << "Total maximum Weight: ";
    int W; cin >> W;
    int knaps[W + 1];
    for (int j = 0; j <= W; j++) {
        knaps[j] = -1;
    }
    knaps[0] = 0;
    cout << "The maximum value that we can get is: " << knapsack(W - 1, weights, values, knaps, N);
    return 0;
}

//#include <bits/stdc++.h>
//
//using namespace std;
//
//bool max(int a, int b) {
//    return (a > b) ? a : b;
//}
//
//int knapsack(int W, int weights[], int values[], int knaps[], int N) {
//    if (N == 0)
//        return 0;
//    if (knaps[W] != -1)
//        return knaps[W];
//    if (W - weights[N - 1] < 0) {
//        knaps[W] = max(knapsack(W, weights, values, knaps, N - 1), knaps[W]);
//        return knaps[W];
//    } else {
//        knaps[W] = max(knapsack(W, weights, values, knaps, N - 1), values[N - 1] + knapsack(W - weights[N - 1], weights, values, knaps, N - 1));
//        return knaps[W];
//    }
//}

//int main() {
//    cout << "Number of items: ";
//    int N;
//    cin >> N;
//    int weights[N], values[N];
//    cout << "Enter the items' weights and their values:\n";
//    for (int i = 0; i < N; i++) {
//        cin >> weights[i] >> values[i];
//    }
//    cout << "Total maximum Weight: ";
//    int W;
//    cin >> W;
//    int* knaps = new int[W + 1]; // Dynamically allocate the knaps array
//    for (int j = 0; j <= W; j++) {
//        knaps[j] = -1;
//        if (j == 0) knaps[0] = 0;
//    }
//    cout << "The maximum value that we can get is: " << knapsack(W, weights, values, knaps, N);
//
//    delete[] knaps; // Deallocate the dynamically allocated array
//
//    return 0;
//}
