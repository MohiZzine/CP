// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
    int TC, k = 1; cin >> TC;
    while(TC--) {
        int relevances[10];
        string websites[10];
        int max_rel; cin >> websites[0] >> max_rel;
        relevances[0] = max_rel;
        for (int i = 1; i < 10; i++) {
            cin >> websites[i] >> relevances[i];
            if (relevances[i] > max_rel) max_rel = relevances[i];
        }
        printf("Case #%d:\n", k++);
        for (int i = 0; i < 10; i++) {
            if (relevances[i] == max_rel) {
                printf("%s\n", websites[i].c_str());
            }
        }
    }

    return 0;
}