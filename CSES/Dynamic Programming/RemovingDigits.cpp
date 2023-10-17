//
// Created by Student on 13/07/2023.
//

#include <bits/stdc++.h>

using namespace std;
int dp[1000005];
int select(int n){
 if (n == 0){
     return 0;
 }
 if (n < 10){
     return 1;
 }
if (dp[n] != -1){
    return dp[n];
}
 else {

    int min = 0;
     for (int i=9;i>0;i--){
         int a = select(i);
         if (a < min ){
             min = a;
         }
     }
    return min;
 }
}
int main() {
int n;
cin >> n;
memset(dp,-1,sizeof(dp));
cout << select(n)<< endl;
return 0;
}
