//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int arr[n + 1];
    int largest = n;
    memset(arr, 0, sizeof(arr));
    for (int i = n; i >= 1; i--) {
        int k; cin >> k;
        arr[k] = 1;
        if (k == largest) {
            while(arr[largest]) {
                cout << largest << " ";
                largest--;
            }
        }
        printf("\n");
    }
//    int m = n;
//    priority_queue<int> pq;
//    stack<int> st;
//    for (int i = n; i >= 1; i--) {
//        int k; cin >> k;
//        if (k == m) {
//            st.push(k);
//            m--;
//        } else {
//            pq.push(k);
//        }
//
//        while(!pq.empty() && !st.empty() && pq.top() < st.top()) {
//            int a = pq.top(); pq.pop();
//            st.push(a);
//        }
//
//        while(!st.empty()) {
//            int b = st.top();
//            st.pop();
//            cout << b << " ";
//        }
//        printf("\n");
//    }
    return 0;
}