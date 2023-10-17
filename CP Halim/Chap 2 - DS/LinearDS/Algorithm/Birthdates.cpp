//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
    string name;
};

bool comp(const Date& d1, const Date d2) {
    if (d1.year == d2.year) {
        if (d1.month == d2.month) return d1.month < d2.month;
        return d1.month < d2.month;
    }
    return d1.year < d2.year;
}

int main() {
    int n; cin >> n;
    vector<Date> birthdates(n);
    for (int i = 0; i < n; i++) {
        cin >> birthdates[i].name >> birthdates[i].day >> birthdates[i].month >> birthdates[i].year;
    }

    sort(birthdates.begin(), birthdates.end(), comp);
    cout << birthdates[n - 1].name << endl;
    cout << birthdates[0].name << endl;
    return 0;
}