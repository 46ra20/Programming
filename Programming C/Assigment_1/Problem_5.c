#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=21 && n<=10000){
        for(int i=21;i<=n;i++){
            if(i%3==0 && i%7==0){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}