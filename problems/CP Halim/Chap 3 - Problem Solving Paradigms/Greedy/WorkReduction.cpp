#include <bits/stdc++.h>

using namespace std;

#define COST_MAX 999999999

int minCost(int N, int M, int A, int B) {
    int res = INT_MAX;
    for (int i = 0; N >= M; i++, N /= 2) {
        int remain = N - M;
        int cost = i * B + remain * A;
        res = min(res, cost);
    }
    return  res;
}

int main() {
    int TC, cases = 1; cin >> TC;
    while(TC--) {
        int N, M, L; cin >> N >> M >> L;
        vector<pair<int, string>> p(L);
        for (int  k = 0; k < L; k++) {
            string line, name = "", a = "", b = "";
            cin >> line;
            int A, B;
            int i = 0;
            while(line[i] != ':') {
                name += line[i++];
            }
            i++;
            while(line[i] != ',') {
                a += line[i++];
            }
            i++;
            while(i < line.length()) {
                b += line[i++];
            }

            A = stoi(a), B = stoi(b);
            p[k].first = minCost(N, M, A, B);
            p[k].second = name;
        }

        sort(p.begin(), p.end());

        printf("Case %d\n", cases++);
        for (int i = 0; i < L; i++) {
            cout << p[i].second << " " << p[i].first << endl;
        }
    }
    return 0;
}