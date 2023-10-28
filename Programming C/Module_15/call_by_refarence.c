#include<stdio.h>
int fun(int *ptr){
    printf("%d",*ptr);
    *ptr = 200;
}
int main(){
    int x=10;
    fun(&x);// call with address of x
    printf("main function= %d",x);
    return 0;
}