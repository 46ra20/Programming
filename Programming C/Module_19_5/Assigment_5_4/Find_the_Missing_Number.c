#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int m;
        int a,b,c;
        scanf("%lld%d%d%d",&m,&a,&b,&c);
        long long int ans_int = m/(a*b*c);
        double ans = (m*1.0)/(a*b*c);
        if(ans == ans_int) printf("%lld\n",ans_int);
        else printf("-1\n");
    }
    return 0;
}