#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&b);
    int arr1[b];
    for(int i=0;i<b;i++)
        scanf("%d",&arr1[i]);
    
    int arr_ans[a+b];
    for(int i=0;i<a;i++)
        arr_ans[i]=arr[i];
    for(int i=0;i<b;i++)
        arr_ans[a+i]=arr1[i];

    for(int i=0;i<a+b;i++)
        printf("%d ",arr_ans[i]);
    return 0;
}