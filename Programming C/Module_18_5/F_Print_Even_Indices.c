#include<stdio.h>
void fun(int *arr,int n){
    if(n == 0) return;
    int x = n-1;
    if(x%2==0) printf("%d ",*(arr+x));
    fun(arr,x);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    fun(arr,n);
    return 0;
}