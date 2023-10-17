#include <bits/stdc++.h>

using namespace std;

long long const INF = 1e9 + 7;
int dp[1050][1050], dX, dY, minDP[1050][1050], c[4] = {0,1,1,1};

char str1[1050], str2[1050];
int step, k = 0;

void printSolution(int i, int j);

int main() {
    dp[0][0] = 0;
    int i, j, first = 0;
    while (gets(str1)) {
        gets(str2);
        if(first)
            puts("");
        first = 1;
        dX = strlen(str1), dY = strlen(str2);
        for (i = 0; i <= dX; i++) {
            for (j = 0; j <= dY; j++) {
                dp[i][j] = INF;
            }
        }

        for(i = 0; i <= dX; i++) {
            for(j = 0; j <= dY; j++) {

                if (str1[i] != str2[j]) {
                    dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + c[1]);
                    if (dp[i + 1][j + 1] == dp[i][j] + c[1]) minDP[i + 1][j + 1] = -2;
                }

                if (str1[i] == str2[j]) {
                    dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + c[0]);
                    if (dp[i + 1][j + 1] == dp[i][j] + c[0]) minDP[i + 1][j + 1] = -1;
                }

                dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + c[2]);

                if (dp[i + 1][j] == dp[i][j] + c[2]) minDP[i + 1][j] = -3;

                dp[i][j + 1] = min(dp[i][j + 1], dp[i][j]+ c[3]);

                if (dp[i][j + 1] == dp[i][j] + c[3]) minDP[i][j + 1] = -4;
            }
        }

        cout << dp[dX][dY] << endl;
        step = k = 0;
        printSolution(dX, dY);
    }
    return 0;
}

void printSolution(int i, int j) {
    if (i == 0 && j == 0)
        return;

    if (minDP[i][j] == -1) {
        printSolution(i - 1, j - 1);
    } else if (minDP[i][j] == -2) {
        printSolution(i - 1, j - 1);
        cout << ++step << " Replace " << i - k << "," << str2[j - 1] << endl;
    } else if (minDP[i][j] == -3) {
        printSolution(i - 1, j);
        cout << ++step << " Delete " << i - k << endl;
        k++;
    } else if (minDP[i][j] == -4) {
        printSolution(i, j - 1);
        k--;
        cout << ++step << " Insert " << i - k << "," << str2[j - 1] << endl;
    }
}
