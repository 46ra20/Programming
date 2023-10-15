#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    int pos;
    scanf("%d",&pos);
    for(int i=pos;i<n;i++)
        arr[i]=arr[i+1];
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    
    return 0;
}