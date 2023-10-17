#include <bits/stdc++.h>

using namespace std;

struct Person {
    string name;
    int salary;
};

bool comp(Person p1, Person p2) {
    if (p1.salary == p2.salary) return p1.name < p2.name;
    return p1.salary > p2.salary;
}

int main() {
    int N; cin >> N;
    vector<Person> pers(N);
    for (int i = 0; i < N; i++) cin >> pers[i].name >> pers[i].salary;

    sort(begin(pers), end(pers), comp);

    for (int i = 0; i < N; i++) cout << pers[i].name << " " << pers[i].salary << "\n";
    return 0;
}