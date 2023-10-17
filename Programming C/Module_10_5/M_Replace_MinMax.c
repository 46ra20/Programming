#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int min=INT_MAX,max=INT_MIN,in_max,in_min;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            in_max=i;
        }
        if(min>arr[i]){
            min=arr[i];
            in_min=i;
        }
    }

    arr[in_max]=min;
    arr[in_min]=max;

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}