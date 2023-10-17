#include <bits/stdc++.h>

using namespace std;

struct Update {
    int day;
    string name;
    string change;
};

bool cmp(Update u1, Update u2) {
    if (u1.day == u2.day) {
        return u1.name < u2.name;
    }
    return u1.day < u2.day;
}

int main() {
    int n; cin >> n;
    Update updates[n];
    int ans = 0, mx = 7;
    for (int i = 0; i < n; i++) {
        cin >> updates[i].day >> updates[i].name >> updates[i].change;
    }

    sort(updates, updates + n, cmp);

    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        int new_value = (updates[i].change[1] - '0') * (updates[i].change[0] == '-' ? -1: 1);
        if (!mp[updates[i].name]) {
            mp[updates[i].name] = 7 + new_value;
            ans++;
        } else {
            mp[updates[i].name] += new_value;
            if (mp[updates[i].name] != mx) ans++;
        }
        mx = max(7, 7 + new_value);
    }
    cout << ans;
    return 0;
}