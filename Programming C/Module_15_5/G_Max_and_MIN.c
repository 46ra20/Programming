#include<stdio.h>
#include<limits.h>
int g_min(int *arr,int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++) if(min>*(arr+i)) min=arr[i];
    return min;
}
int g_max(int *arr,int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++) if(max<*(arr+i)) max=arr[i];
    return max;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d",&arr[i]);
    
    printf("%d ",g_min(arr,n));
    printf("%d",g_max(arr,n));
    return 0;
}