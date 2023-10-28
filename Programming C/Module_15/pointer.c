#include<stdio.h>
int main(){
    int x=100;
    int *ptr=&x;
    printf("%d\n",&x);
    printf("%d",ptr);
    return 0;
}