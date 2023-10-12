#include<stdio.h>
int main(){
    int a,b,c,min=0,max=0;
    scanf("%d%d%d",&a,&b,&c);
    // if((a>b&&a>c)||(a<b&&a<c) )
    if(a>=b&&a>=c)
        max=a;
    else if(b>=a&&b>=c)
        max=b;
    else
        max=c;

    //min
    if(a<=b&&a<=c)
        min=a;
    else if(b<=a&&b<=c)
        min=b;
    else
        min=c;
    printf("%d %d",min,max);
    return 0;
}