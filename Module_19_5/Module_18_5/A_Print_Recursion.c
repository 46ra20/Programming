#include<stdio.h>
void fun(int n){
    printf("I love Recursion\n");
    if(n == 1) return;
    fun(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}