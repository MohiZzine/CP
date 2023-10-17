#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    long long arr[n], srt[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i]; srt[i] = arr[i];
    }
//
    sort(srt, srt + n);
    int low, high, cnt = 0;
    long long first;
    while(cnt < n && arr[cnt] == srt[cnt]) cnt++;
    if (cnt == n) {
        printf("yes\n1 1");
        return 0;
    }
    else if (cnt < n) {
        low = cnt;
        first = srt[cnt];
        while(cnt < n - 1 && arr[cnt + 1] < arr[cnt]) cnt++;
        high = cnt;
        sort(arr + low, arr + high + 1);

    }
    for (int i = 0; i <n; i++) {
        if (srt[i] != arr[i]) {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes\n";
    cout << ++low << " " << ++high;
    return 0;
}