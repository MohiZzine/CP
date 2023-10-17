#include <bits/stdc++.h>

using namespace std;

char n[1001];
int main() {
    while(scanf("%s", n)) {
        if (n[0] == '0') break;
        int sum = 0, ans = 0;
        for (int i = 0; n[i]; i++) sum += n[i] - '0';
        if (sum % 9 == 0) {
            ans++;
            while(sum > 9) {
                int tmp = sum;
                sum = 0;
                ans++;
                while(tmp) {
                    sum += tmp % 10;
                    tmp /= 10;
                }
            }
            printf("%s is a multiple of 9 and has 9-degree %d.", n, ans);
        } else {
            printf("%s is not a multiple of 9.", n);
        }
        ans++;

        cout << "\n";
    }
    return 0;
}