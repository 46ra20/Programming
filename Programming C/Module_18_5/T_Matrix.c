#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) scanf("%d",&arr[i][j]);
    }
    int di1=0,di2=0;
    for(int i=0;i<n;i++){
        for(int j=0,y=n-1;j<n;j++,y--){
            if(i==j){
                di1+=arr[i][j];
                di2+=arr[i][y];
            }
        }
    }
    printf("%d",abs(di1-di2));
    return 0;
}