#include <bits/stdc++.h>

using namespace std;

bool narcist(int n) {
    int res = 0, tmp = n;
    while(tmp) {
        res += pow(tmp % 10, 3);
        tmp /= 10;
    }
    cout << res << "\n";
    return res == n;
}

int main() {
    narcist(153);
    cout << pow(5.0, 3.0);
//    for (int i = 100; i <= 999; i++) {
//        if (narcist(i)) {
//            printf("%d is narcissistic number\n", i);
//        }
//    }
//    cout << "hh";
    return 0;
}