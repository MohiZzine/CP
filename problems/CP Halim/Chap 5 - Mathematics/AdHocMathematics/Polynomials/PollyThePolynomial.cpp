#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string line;
    while(getline(cin, line)) {
        istringstream iss(line);
        vector<int> coef;
        int num;
        while(iss >> num) {
            coef.push_back(num);
        }

        reverse(coef.begin(), coef.end());

        getline(cin, line);
        istringstream eval(line);
        while(eval >> num) {
            long long res = 0, Pow = 1, cur = 0;
            while(cur < coef.size()) {
                res += Pow * coef[cur++];
                Pow *= num;
            }
            cout << res << "\n";
        }
    }
    return 0;
}