//
// Created by Student on 11/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int covered[1000];
int best;

//void fillCoveredTable(string field) {
//    best = 0;
//    for (int i = 0; i < field.size(); i++) {
//        if (i == 0) {
//            if (field.size() == 1) {
//                if (field[0] == '#') {
//                    break;
//                }
//                else best++;
//            } else {
//                if (field[1] == '#' || field[0] == '#') {
//                    if (field[0] == '#' && field[1] == '.') {
//                        best++;
//                        field[1] = '#';
//                        continue;
//                    }
//                    if (field[0] == '#' && field[1] == '#') {
//                        i += 1;
//                        continue;
//                    }
//                    if (field[0] == '.' && field[1] == '#') {
//                        best++;
//                        continue;
//                    }
//                } else {
//                    best++;
//                    field[0] = '#';
//                    field[1] = '#';
//                    if (field.size() > 2) field[2] = '#';
//                    i += 2;
//                }
//            }
//            continue;
//        }
//        if (i < field.size() - 1) {
//            if (field[i] == '#') {
//                i++;
//            } else {
//                if (field[i - 1] == '')
//            }
//
//            if (field[i - 1] == '#' || field[i + 1] == '#') best++;
//            else {
//                if (field[i] == '#') covered[i] = 1;
//                else covered[i] = 0;
//            }
//            continue;
//        }
//        if (i == field.size() - 1) {
//            if (field[i - 1] == '#') covered[i] = 1;
//            else {
//                if (field[i] == '#') covered[i] = 1;
//                else covered[i] = 0;
//            }
//            break;
//        }
//    }
//}

//int solve(int N) {
//    best = 0;
//    int i = 0;
//    while (i < N) {
//        if (i == 0) {
//            if (N == 1) {
//                if (covered[i] == 1) {
//                    i++;
//                }
//                else {
//                    i++;
//                    best++;
//                }
//            } else {
//                if (covered[i] == 0) {
//                    covered[i] = 1; covered[i + 1] = 1;
//                    i += 2;
//                    best++;
//                } else {
//                    i++;
//                }
//            }
//            continue;
//        }
//        if (i < N - 1) {
//            if (covered[i] == 1) {
//                i++;
//                continue;
//            } else {
////                if (covered[i] = 0) {
//                covered[i + 1] = 1;
//                covered[i - 1] = 1;
//                i+= 2;
//                best++;
////                }
//            }
//        }
//        if (i == N - 1) {
//            if (covered[i] == 1) {
//                i++; continue;
//            } else {
//                best++; i++; continue;
//            }
//        }
//    }
//    return best;
//}

int solve(string field) {
    int N = field.size();
    best = 0;
    for (int i = 0; i < N; i++) {
        if (N == 1) {
            if (field[i] == '.') best++;
        } else {
            if (N == 2) {
                if (field[0] == '.' || field[1] == '.') {
                    best++; break;
                }
            }
            else {
                if (field[0] == '.' && field[1] == '.' && field[2] == '.') {
                    best++;
                    field[2] = '#';
                    i += 3;
                } else {
                    if (field[0] == '#' || field[1] == '#' || field[2] == '#') {
                        best++;
                        i+= 2;
                    }
                }
            }
            continue;
        }
        if (i < N - 3) {
            if (field[i] == '#') {
                i++;
            } else {
                if ((field[i + 1] == '.' || field[i + 1] == '#') && field[i + 2] && field[i + 3] == '.') {
                    best++; i += 3;
                } else if () {
                    best++;
                }
            }
        }
    }
}

int main() {
    int TC, cas = 1; cin >> TC;
    while(TC--) {
        int N; cin >> N;
        string field; cin >> field;
//        fillCoveredTable(field);
        for (int i = 0; i < N; i++) {
            cout << covered[i];
        }
        cout << endl;
        cout << solve(N) << endl;

//        for (int i = 0; i < )
//        memset(covered, -1, sizeof covered);
    }

    return 0;

}