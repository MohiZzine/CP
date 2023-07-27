//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    double ncows, ncars, nshow;
    while(scanf("%lf %lf %lf", &ncows, &ncars, &nshow) == 3) {
        double total = ncars + ncows, remain = ncars + ncows - nshow;
        double cowGuess = (ncows / total) * (ncars / (remain - 1));
        double carGuess = (ncars / total) * ((ncars - 1) / (remain - 1));
        printf("%.5lf\n", cowGuess + carGuess);
    }
    return 0;
}