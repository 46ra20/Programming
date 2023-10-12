#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        do{
            printf("%d ",a%10);
            a=a/10;
        }while(a!=0);
        printf("\n");
    }
    return 0;
}