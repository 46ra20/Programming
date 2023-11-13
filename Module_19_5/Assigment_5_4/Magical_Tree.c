#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k=1,s=(n+10)/2;
    for(int i=0;i<=(n+10)/2;i++){
        for(int j=s;j>0;j--) printf(" ");
        for(int j=0;j<k;j++) printf("*");
        k+=2;
        s--;
        printf("\n");
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<((n+10)/2-(n/2));j++) printf(" ");
        for(int j=0;j<n;j++) printf("*");
        printf("\n");
    }
    return 0;
}