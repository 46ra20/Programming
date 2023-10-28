#include<stdio.h>
int swap_it(int *x,int *y){
    int tem = *x;
    *x = *y;
    *y = tem;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    swap_it(&a,&b);
    printf("%d %d",a,b);
    return 0;
}