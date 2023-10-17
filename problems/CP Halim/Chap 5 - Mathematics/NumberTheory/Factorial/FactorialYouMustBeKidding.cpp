#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)==1){
        double s;
        int i;
        if(n>13||(n<0&&((-n)&1)==1)) // 我也不知道怎麼過的
            puts("Overflow!");
        else if(n<8||(n<0&&((-n)&1)==0)) // 有負數測資但我也不清楚是如何運作
            puts("Underflow!");
        else{
            n=(n>0)?n:-n;
            for(s=1,i=2;i<=n;i++)
                s*=i;
            printf("%.0lf\n",s);
        }
    }
    return 0;
}