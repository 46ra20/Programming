#include<stdio.h>
int main(){
    int s,k;
    scanf("%d%d",&s,&k);
    float ans = (k*1.0)/(1-(s*1.0/100));
    printf("%.2f",ans);
    return 0;
}