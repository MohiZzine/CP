// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N, T = 1;
    while(scanf("%d", &N) != EOF) {
      map<string, int> ans;
      vector<string> names;

      for (int i = 0; i < N; i++) {
        string name; cin >> name;
        ans[name] = 0; names.push_back(name);
      }

      for (int j = 0; j < N; j++) {
        string name; cin >> name;
        int sum, nb; cin >> sum >> nb;
        if (nb == 0) continue;
        int gift = sum / nb; int rest = sum % nb;
        while(nb--) {
          string rec; cin >> rec;
          ans[rec] += gift;
        }
        ans[name] += (rest - sum);
      }

      if (T++ > 1)
      cout << endl;

      for (int k = 0; k < N; k++) {
        printf("%s %d\n", names[k].c_str(), ans[names[k]]);
      }
    }
    return 0;
}



    // while(scanf("%d", &N) != EOF) {
    //     int k = N;
    //     vector<int> ans(N, 0);
    //     vector<string> pers(N);
    //     while(N--) {
    //         cin >> pers[k - N - 1];
    //     }      
    //     for (int i = 0; i < k; i++) {
    //         string name; cin >> name;
    //         int sum; cin >> sum;
    //         int nb; cin >> nb;
    //         if (nb == 0) continue;
    //         int gift = sum / nb;
    //         int rest = sum % nb;
    //         printf("%d %d\n", gift, rest);
    //         while(nb--) {
    //             string rec_name; cin >> rec_name;
    //             int rec_ind = find(pers.begin(), pers.end(), rec_name) - pers.begin();
    //             ans[rec_ind] += gift;
    //         }
    //         int send_ind = find(pers.begin(), pers.end() + k, name) - pers.begin();
    //         ans[send_ind] += (rest - sum);
    //     }
    //     for (int j = 0; j < k; j++) {
    //         printf("%s %d\n", pers[j].c_str(), ans[j]);
    //     }
    //     printf("\n");
        
    // }