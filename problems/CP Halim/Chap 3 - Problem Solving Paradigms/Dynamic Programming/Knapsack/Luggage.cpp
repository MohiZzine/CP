#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    getchar();
    while (t--){
        int w[50], n = 0, tmp = 0, sum = 0;
        char str[100000];
        bool DP[500] = { false };
        gets(str);
        for (int i = 0; str[i] != '\0'; i++)
            if (str[i] == ' ')
                w[n++] = tmp, tmp = 0;
            else
                tmp = tmp * 10 + str[i] - '0';
        w[n++] = tmp;
        for (int i = 0; i < n; i++)
            sum += w[i];
        if (sum % 2 == 0){
            DP[0] = true;
            for (int i = 0; i < n; i++)
                for (int j = sum; j - w[i] >= 0; j--)
                    DP[j] |= DP[j - w[i]];
            puts(DP[sum / 2] ? "YES" : "NO");
        }
        else
            puts("NO");

    }
    return 0;
}