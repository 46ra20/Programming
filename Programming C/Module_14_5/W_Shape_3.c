#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=n-1,k=1;
    for(int i=0;i<n;i++){
        for(int j=s;j>0;j--) printf(" ");
        for(int j=0;j<k;j++) printf("*");
        k+=2;
        s--;
        printf("\n");
    }
    s=0;
    k=n*2;
    for(int i=0;i<n;i++){
        for(int j=0;j<s;j++) printf(" ");
        for(int j=k;j>1;j--) printf("*");
        s++;
        k-=2;
        printf("\n");

    }
    return 0;
}