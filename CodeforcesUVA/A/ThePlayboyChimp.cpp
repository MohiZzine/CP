//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll arr[50010];
ll age;
int N;

int findLargestLower(int start, int end) {
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] > age) end = mid - 1;
        else if (arr[mid] <= age) start = mid + 1;
//        else end = mid;
    }
    if (start >= N) return -1;
    else return arr[start];
}

int findSmallestLarger(int start, int end) {
    while(start < end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] > age) end = mid - 1;
        else if (arr[mid] <= age) start = mid + 1;
//        else start = mid;
    }
    if (end < 0) return -1;
    else return arr[end];
}

int main() {
    cin >> N;
    for (int i = 0; i< N; i++) {
        cin >> arr[i];
    }

    int Q; cin >> Q;
    while(Q--) {
        cin >> age;
        int last = findLargestLower(0, N - 1);
        int first = findSmallestLarger(0, N - 1);

        if (last != -1) printf("%lld", last);
        else printf("X");
        printf(" ");
        if (first != -1) printf("%lld", first);
        else printf("X");
        printf("\n");
    }
    return 0;
}