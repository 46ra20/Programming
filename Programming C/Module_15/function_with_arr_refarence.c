#include<stdio.h>
void fun(int *arr){
    //  printf("%d\n",*arr);
    printf("\n");
     *(arr+3)=600;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++) printf("%d ",*(i+arr));
    fun(arr);
    for(int i=0;i<5;i++) printf("%d ",*(i+arr));
    return 0;
}