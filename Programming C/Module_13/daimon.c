#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k=1,s=n;
    for(int i=0;i<(n*2-1);i++){
        for(int x=s;x>0;x--) printf(" ");
        for(int y=0;y<k;y++) printf("*   ");
        if(i>=(n-1)){
            s++,k-=2;
        }
        else{
            s--,k+=2;
        }
        printf("\n");
    }
    return 0;
}