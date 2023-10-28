#include<stdio.h>
int fun(int arr[],int y){
    for(int i=0;i<y;i++)
        printf("%d ",*(arr+i));
}
int main(){
    int arr[] = {1,3,4,5,67,6,5};
    fun(arr,sizeof(arr)/sizeof(int));
    return 0;
}