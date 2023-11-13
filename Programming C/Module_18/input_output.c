#include<stdio.h>
int main(){
    int arr[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        printf("[");
        for(int j=0;j<2;j++){
            printf("%d",arr[i][j]);
            if(j<1) printf(" ");
        }
        printf("]\n");
    }
    return 0;
}