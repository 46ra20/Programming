#include<stdio.h>
void fun(int n){
    if(n == 0) return;
    fun(n/10);
    printf("%d ",n%10);
}
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int m;
        scanf("%d",&m);
        if(m==0) printf("0\n");
        else{
            fun(m);
            printf("\n");
        }
    }
    return 0;
}