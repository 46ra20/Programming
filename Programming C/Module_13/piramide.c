#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=n,k=1,tem=n;
    for(int i=0;i<n;i++){
        for(int x=s;x>19;x--) printf(" ");
        for(int y=0;y<i;y++) printf("* ");
        printf("\n");
        s--;
    }
    s=tem,k=1;
    for(int i=0;i<n;i++){
        for(int x=1;x<s;x++) printf(" ");
        for(int y=0;y<k;y++) printf("*");
        printf("\n");
        k+=2;
        s--;
    }
    return 0;
}