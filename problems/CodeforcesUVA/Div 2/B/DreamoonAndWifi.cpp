#include <bits/stdc++.h>

using namespace std;

double fact(double n) {
    if (n == 0 || n == 1) return 1;
    return n * fact(n - 1);
}

int main() {
    string s1, s2; cin >> s1 >> s2;
    double pb;
    double qst = 0, sum1 = 0, sum2 = 0;
    for (int i = 0; i < s1.size(); i++) {
        sum1 += (s1[i] == '+') ? 1: 0;
        if (s2[i] == '+') sum2 += 1;
        else if (s2[i] == '?') qst++;
    }

    if (sum1 > sum2 + qst || sum1 < sum2) pb = 0;
    else pb = fact(qst) / pow(2, qst) * (1 / (fact(abs(sum1 - sum2)) * fact(qst - abs(sum1 - sum2))));


    printf("%.9lf", pb);

    return 0;
}