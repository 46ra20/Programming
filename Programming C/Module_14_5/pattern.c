#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    // int s=n-1,k=1;
    // for(int i=0;i<n;i++){
    //     for(int j=s;j>=1;j--) printf(" ");
    //     for(int j=0;j<=i;j++) printf("*");
    //     s--;
    //     printf("\n");
    // }
    
    int s=0,k=n*2-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<s;j++) printf(" ");
        for(int j=k;j>=1;j--) printf("*");
        printf("\n");
        s++,k-=2;
    }

    return 0;
}