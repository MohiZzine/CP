//
// Created by ADMIN on 17/07/2023.
//
#include <bits/stdc++.h>

using namespace std;

unordered_map<long long, int> len;

int getLongest(long long n){
    long long vals;
    if (n == 1) return 0;
    if (len.find(n) != len.end())
        return len.find(n)->second;
    int length;
    if (n % 2 == 0)
        length = getLongest(n / 2);
    else
        length = getLongest(n * 3 + 1);
    len[n] = length;
    return length;
}

int main() {
    long long first, last;
    while(scanf("%ld %ld", &first, &last), first | last) {
        long long ans = 0, num_vals = 0;
//        long long vals;
        if (first > last) swap(first, last);
//        ans = first;
        for (long long i = first; i <= last; i++) {
            int len = getLongest(i);
            if (len  > num_vals) {
                num_vals = len;
                ans = i;
            }
        }
        printf("Between %d and %d, %d generates the longest sequence of %d values.\n", first, last, ans, num_vals);
    }

    return 0;
}