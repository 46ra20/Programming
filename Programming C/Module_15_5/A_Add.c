#include<stdio.h>
int a_add(int x,int y){
    return x+y;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a_add(a,b));
    return 0;
}