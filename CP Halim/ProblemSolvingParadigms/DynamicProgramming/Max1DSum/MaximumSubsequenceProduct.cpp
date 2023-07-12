//
// Created by Student on 12/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
ll bestProd;
vector<int> nums;

ll max(ll a, ll b) {
    return a > b? a: b;
}

//ll solve(vector<int> nums) {
//    int n = nums.size();
//    bestProd = -99999;
//    for (int i = 0; i < n; i++) {
//        ll prod = 1;
//       for (int j = i; j < n; j++) {
//            prod *= nums[i];
//       }
//       if (bestProd < prod) bestProd = prod;
//    }
//    return bestProd;
//}

int main() {
    while(1) {
        int n, i = 0, nums[200];
        ll prod, best = -999999;
        while((cin >> n) && (n != -99999)) nums[i++] = n;

        for (int k = 0; k <i; k++) {
            prod = 1;
            for (int j = k; j < i; j++) {
                prod *= nums[j];
            }
            best = max(best, prod);
        }

        printf("%lld\n", best);
    }


    return 0;
}

