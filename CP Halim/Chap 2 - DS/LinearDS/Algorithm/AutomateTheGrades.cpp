//
// Created by Mohi
//

#include <bits/stdc++.h>

using namespace std;

double bestTwo(int a, int b, int c) {
    return (double)((a + b + c) - min(a, min(b, c))) / 2.0;
}

double grade(int t1, int t2, int final, int att, int best) {
    return t1 + t2 + best + (double)final + (double)att;
}

int main() {
    int t, cases = 1; cin >> t;
    while(t--) {
        int t1, t2, final, att, a, b, c; cin >> t1 >> t2 >> final >> att >> a >> b >> c;
        double g = grade(t1, t2, final, att, bestTwo(a, b, c));
        printf("Case %d: ", cases++);
        if (g >= 90) cout << "A" ;
        else if (g >= 80) cout << "B";
        else if (g >= 70) cout << "C";
        else if (g >= 60) cout << "D";
        else cout << "F";
        cout << endl;
    }
    return 0;
}