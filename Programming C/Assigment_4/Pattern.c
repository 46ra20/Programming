#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=n-1,k=0;
    for(int i=0;i<(n*2-1);i++){
        for(int j=s;j>0;j--) printf(" ");
        for(int j=0;j<=k;j++){
            if(i%2==0) printf("#");
            else printf("-");
        }
        if(i<n-1) s--,k+=2;
        else s++,k-=2;
       
        printf("\n");
    }
    return 0;
}