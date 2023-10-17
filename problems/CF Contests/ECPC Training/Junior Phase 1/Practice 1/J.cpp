#include <bits/stdc++.h>

using namespace std;

struct Person {
    int grades[5];
    string name;
};

bool cmp(Person p1, Person p2) {
    if (p1.grades[4] == p2.grades[4]) return p1.name < p2.name;
    return p1.grades[4] > p2.grades[4];
}

int main() {
    int n; cin >> n;
    vector<Person> pers(n);
    for (int i = 0; i < n; i++) {
        cin >> pers[i].name;
        for (int k = 0; k < 4; k++) {
            cin >> pers[i].grades[k];
            pers[i].grades[4] += pers[i].grades[k];
        }
    }

    sort(pers.begin(), pers.end(), cmp);

    for (int i = 0; i < n; i++) {
        cout << pers[i].name << " " << pers[i].grades[4] << " " << pers[i].grades[0] << " " << pers[i].grades[1] << " " << pers[i].grades[2] << " " << pers[i].grades[3] << "\n";
    }
    return 0;
}