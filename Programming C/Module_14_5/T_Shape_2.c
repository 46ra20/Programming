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
    return 0;
}