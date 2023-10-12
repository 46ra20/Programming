#include<stdio.h>
int main(){
    int n,min,ind=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
            ind=i+1;
        }
    }
    printf("%d %d",min,ind);
    return 0;
}