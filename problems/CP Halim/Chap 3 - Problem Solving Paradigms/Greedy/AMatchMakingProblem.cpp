#include <bits/stdc++.h>

using namespace std;

int main() {
    int B, S, cases = 1;
    while(scanf("%d%d", &B, &S), B | S) {
        multiset<int> b, s;
        for (int i = 0; i < B; i++) {
            int q; cin >> q;
            b.insert(q);
        }

        for (int i = 0; i < S; i++) {
            int a; cin >> a;
            s.insert(a);
        }

        while(!b.empty() && !s.empty()) {
            auto it = b.rbegin();
            auto closest = s.lower_bound(*it);
            auto best;
            b.erase(it);
            if (closest != s.begin()) {
                auto after = it--;
                if (abs(*closest - *it) < abs(*(closest) - *after)) best = it;
                else
            } else {
                s.erase(closest)
            }
        }

        printf("Case %d: %d", cases++, b.size());
        if (b.size()) printf(" %d", *b.begin());
        printf("\n");
    }

    return 0;
}