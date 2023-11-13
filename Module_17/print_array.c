#include<stdio.h>
int fun(int *arr,int n){
    if(n==10) return 0;
    printf("%d ",*(arr+n));
    fun(arr,n+1);
    return n;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    fun(arr,0);
    // printf("%d ",fun(arr,0));
    return 0;
}