// #include<stdio.h>
// int fun(int *arr,int n,int ans){
//     if(n==0) return ans;
//     ans += *(arr+n-1);
//     fun(arr, n-1,ans);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n>=1){
//         int arr[n];
//         for(int i=0;i<n;i++) scanf("%d",&arr[i]);
//         printf("%d",fun(arr,n,0));
//     }
//     else printf("0");
//     return 0;
// }

#include<stdio.h>
long long int fun(int *arr,int n,long long int ans){
    if(n==0) return ans;
    int i = n-1;
    ans += arr[i];
    fun(arr,i,ans);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    long long int x = fun(arr,n,0);
    printf("%lld",x);
    return 0;
}