#include<stdio.h>
#include<stdlib.h>
void sort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int tem= arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }
        }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            b[i] = a[i];
        }
        sort(b,n);
        for(int i=0;i<n;i++){
            c[i] = a[i] - b[i];
            printf("%d ",abs(c[i]));
        }
        printf("\n");
    }
    return 0;
}