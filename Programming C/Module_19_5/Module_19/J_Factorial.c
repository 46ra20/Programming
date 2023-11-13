#include<stdio.h>
long long int fun(int x,long long int i){
    if(x==0) return 1;
    else if(x==1){
        return i;
    }
    i*=x;
    fun(x-1,i);
}
int main(){
    int n;
    scanf("%d",&n);
    long long int ans = fun(n,1);
    printf("%lld",ans);
    return 0;
}