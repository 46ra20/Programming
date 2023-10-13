#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],sumPos=0,sumNeg=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
            sumPos+=arr[i];
        else
            sumNeg+=(arr[i]*-1);
    }
    printf("%d %d",sumPos,sumNeg*-1);
    
    return 0;
}