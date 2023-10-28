#include<stdio.h>
int b_print(int x){
    for(int i=1;i<=x;i++){
        printf("%d",i);
        if(i<x) printf(" ");
    }   
}
int main(){
    int n;
    scanf("%d",&n);
    b_print(n);
    return 0;
}