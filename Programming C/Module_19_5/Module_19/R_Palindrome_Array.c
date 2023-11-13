#include<stdio.h>
int fun(int *arr,int n,int i){
    if(i >= n) return 1;
    return fun(arr,n-1,i+1) && arr[i]==arr[n];
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int x = fun(arr,n-1,0);
    if(x) printf("YES");
    else printf("NO");
    return 0;
}

// #include<stdio.h>
// int main(){
//     int n,flag=1;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++) scanf("%d",&arr[i]);
//     for(int i=0,j=n-1;i<j;i++,j--){
//         if(arr[i] != arr[j]){
//             flag=0;
//             break;
//         }
//     }
//     if(flag) printf("YES\n");
//     else printf("NO\n");
//     return 0;
// }

// #include<stdio.h>
// #include<stdbool.h>
// bool fun(int *arr,int i,int j){
//     if(i>=j) return true;
//     return fun(arr,i+1,j-1) && arr[i]==arr[j];
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++) scanf("%d",&arr[i]);
//     if(fun(arr,0,n-1)) printf("YES\n");
//     else printf("NO\n");
//     return 0;
// }