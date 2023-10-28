#include<stdio.h>
int fun(int x){
    x=200;
    printf("%d",x);
}
int main(){
    int x=10;
    printf("%d\n",x);
    fun(x);//call with value
    return 0;
}