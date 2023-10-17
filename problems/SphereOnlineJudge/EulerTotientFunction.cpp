#include <iostream>
using namespace std;

const int MAX = 1e6 + 2;
int phi[MAX];

int main() {
    for (int i = 1; i < MAX; i++) phi[i] = i;
    for (int i = 2; i < MAX; i++) {
        if (phi[i] == i) {
            for (int j = i; j < MAX; j += i) phi[j] -= phi[j] / i;
        }
    }

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << phi[n] << "\n";
    }
    return 0;
}
