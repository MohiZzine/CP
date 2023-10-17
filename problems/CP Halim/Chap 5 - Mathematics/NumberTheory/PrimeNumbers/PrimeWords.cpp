#include <bits/stdc++.h>

using namespace std;
const int SIZE = 5000;
bitset<SIZE> bs;

int main() {
    bs.set();
    bs[0] = 0;
    bs[1] = 1;
    for (int i = 2; i < SIZE; i++) {
        if (bs[i])
            for (int j = 2 * i; j < SIZE; j += i) bs[j] = 0;
    }
    char s[100];
    while(scanf("%s", s) == 1) {
        int num = 0;
        for (int i = 0; s[i]; i++) {
            if (s[i] <= 'z' && s[i] >= 'a') num += s[i] - 'a' + 1;
            else num += s[i] - 'A' + 27;
        }

        if (bs[num]) cout << "It is a prime word.\n";
        else cout << "It is not a prime word.\n";
    }
    return 0;
}