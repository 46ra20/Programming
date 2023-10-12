#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a%2==0)
            printf("Even");
        if(a%2!=0)
            printf("Odd");
        if(a>0)
            printf("Posative");
        if(a<0)
            printf("Negative");
    }
    
    return 0;
}