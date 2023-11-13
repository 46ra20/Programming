#include<stdio.h>
int fun(int *arr,int i,int max){
    if(i==0) return max;
    if(*(arr+i-1)>max) max= *(arr+i-1);
    fun(arr,i-1,max);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int x = fun(arr,n,arr[0]);
    printf("%d",x);
    return 0;
}