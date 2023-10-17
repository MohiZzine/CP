//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

typedef pair<double, double> pd;
vector<vector<double>> figures;
bool inFigure(double x, double y, int i) {
    return (x > figures[i][0] && x < figures[i][2] && y < figures[i][1] && y > figures[i][3]);
}

int main() {
    char s;
    while(scanf("%c", &s), s != '*') {
        double x1, y1, x2, y2;
        scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
        vector<double> figure;
        figure.push_back(x1);
        figure.push_back(y1);
        figure.push_back(x2);
        figure.push_back(y2);
        figures.push_back(figure);
    }

    double x, y;
    int pt = 0;
    while(scanf("%lf %lf", &x, &y), x != 9999.9 && y != 9999.9) {
        pt++;
        int count = 0;
        for (int i = 0; i < figures.size(); i++) {
            if (inFigure(x, y, i))
                printf("Point %d is contained in figure %d\n", pt, i + 1), count++;

        }
        if (!count) printf("Point %d is not contained in any figure\n");
    }
    return 0;
}