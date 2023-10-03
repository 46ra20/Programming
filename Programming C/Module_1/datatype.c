// int float char
#include<stdio.h>
int main(){
    int i=10;
    float f=13.6;
    int x;
    scanf("%d", &x);
    char c='c';
    // printf("%d %0.2f %c",i,f,c);
    // what if ,if i change 
    printf("%d %.2f %c", c, i, f); 
    printf("%d",x);
    return 0;
}