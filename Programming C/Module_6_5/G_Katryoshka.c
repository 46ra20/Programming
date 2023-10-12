#include<stdio.h>
int main(){
    long long int n,m,k,min=0,ans=0;
    scanf("%lld%lld%lld",&n,&m,&k);
    if(n<=m&&n<=k)
        min=n;
    else if(m<=n&&m<=k)
        min=m;
    else
        min=k;
    ans+=min;
    n-=min;
    m-=min;
    k-=min;
    n/=2;
    if(n<k)
        ans+=n;
    else
        ans+=k;
    printf("%lld",ans);
    return 0;
}