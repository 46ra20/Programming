// #include<stdio.h>
// int main(){
//     int n,k;
//     scanf("%d%d",&n,&k);
//     int a[n];
//     for(int i=0;i<n;i++) scanf("%d",&a[i]);
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]<a[j]){
//                 int tem = a[i];
//                 a[i] = a[j];
//                 a[j] = tem;
//             }
//         }
//     }

//     long long int ans=0;
//     for(int i=0;i<k;i++) if(a[i]>0) ans+=a[i];
//     printf("%lld",ans);
//     return 0;
// }

#include <stdio.h>
void sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int targetIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (targetIdx < arr[j])
                targetIdx = j;
        }
        int temp = arr[targetIdx];
        arr[targetIdx] = arr[i];
        arr[i] = temp;
    }
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]<arr[j]){
    //             int tem = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = tem;
    //         }
    //     }
    // }
}
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sort(arr, n);
    // for (int i = 0; i < k; i++) printf("%d ",arr[i]);
    long long maxSum = 0;
    for (int i = 0; i < k; i++)
        if (arr[i] > 0)
            maxSum += arr[i];
    printf("\n%lld", maxSum);
    return 0;
}