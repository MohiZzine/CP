// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
    int TC, k = 1; cin >> TC;
    while(TC--) {
        int N, milecost = 0, juicecost = 0; cin >> N;
        while(N--) {
            int num; cin >> num;
            milecost += (num / 30) * 10 + 10;
            juicecost += (num / 60) * 15 + 15;
        }
        printf("Case %d: ", k++);
        if (milecost > juicecost) {
            printf("Juice %d\n", juicecost);
        }
        else if (milecost == juicecost) {
            printf("Mile Juice %d\n", milecost, juicecost);
        } else {
            printf("Mile %d\n", milecost);
        }
    }
    return 0;
}