#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int n; scanf("%d", &n);
        vector<ll> vec(n);
        for (int i = 0; i < n; i++) scanf("%lld", &vec[i]);
        sort(vec.begin(), vec.end());

        vector<ll> new_v(n);

        int l, r, cnt = 0;
        if (n & 1) l = n / 2;
        else l = n / 2 - 1;
        r = l + 1;

        while(l >= 0 || r < n) {
            if ((cnt & 1) == 0) new_v[cnt++] = vec[l--];
            else new_v[cnt++] = vec[r++];
        }
        for (int i = 0; i < n; i++) {
            if (i) printf(" ");
            printf("%lld", new_v[i]);
        }
        printf("\n");
    }
    return 0;
}