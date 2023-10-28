#include<stdio.h>
int main(){
    int x;\
    scanf("%d",&x);
    printf("%p\n",&x);//address of x
    int*p = &x;//store address of x in p pointer
    printf("%d",*p);//*p it's called dereference
    return 0;
}