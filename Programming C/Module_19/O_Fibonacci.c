#include<stdio.h>
int fun(int x){
    if(x==0) return 0;
    else if(x==1) return 1;
    else{
        int y = fun(x-1)+fun(x-2);
        return y;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int x = fun(n);
    return 0;
}