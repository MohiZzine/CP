#include <bits/stdc++.h>

using namespace std;

int main() {
    string cows[] = {"Bessie", "Elsie", "Daisy", "Gertie", "Annabelle", "Maggie", "Henrietta"};
    int n; cin >> n;
    set<pair<int, string>> s;
    map<int, string> mp;
    while(n--) {
        string name; cin >> name;
        int x; cin >> x;
        mp[x] = name;
    }
    return 0;
}